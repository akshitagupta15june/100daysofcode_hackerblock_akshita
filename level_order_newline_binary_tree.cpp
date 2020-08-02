#include <iostream>
using namespace std;
class node
{
    public:
    string data;
    node*left;
    node*right;
    node(string d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }


};
node*buildtree()
{
    string str;
    cin>>str;
    if(str=="false")
    {
           return NULL;
    }
    if(str=="true")
    {
         string d;
         cin>>d;
         node*root=new node(d);
        root->left=buildtree();
        root->right=buildtree();
        return root;
    }
    node*root=new node(str);
        root->left=buildtree();
        root->right=buildtree();
       return root;
}
int height(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
void printkthlevel(node*root,int k)
{
    if(root==NULL)
    {
      return;  
    }
    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    printkthlevel(root->left,k-1);
    printkthlevel(root->right,k-1);
    return;
}
void printalllevel(node*root)
{
    int h=height(root);
    for(int i=1;i<=h;i++)
    {
        printkthlevel(root,i);
        cout<<endl;
    }
    return;
}
int main() {
   node*root=buildtree();
   printalllevel(root);

}
