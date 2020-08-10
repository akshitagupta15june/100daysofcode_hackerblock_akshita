#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
#include<cmath>
using namespace std;

vector<int> vec;

class node
{
public:
    node*left;
    node*right;
    int data;
    int hd;

    node(int d)
    {
        left = NULL;
        right = NULL;
        data = d;
        hd=0;
    }

};
node* buildTree(int* pre,int *in,int s,int e)
{
    static int i = 0;

    if(s>e)
    {
        return NULL;
    }

    int index=-1;
    for(int j=s;j<=e;j++)
    {
        if(pre[i] == in[j])
        {
            index = j;
            break;
        }
    }
    node*root=new node(pre[i]);

    i++;

    root->left = buildTree(pre,in,s,index-1);
    root->right = buildTree(pre,in,index+1,e);

    return root;
}
void printAtKDown(node*root, int k,vector<int> &vec)
{
    if(root == NULL)
    {
        return;
    }

    if(k == 0)
    {
        vec.push_back(root->data);
    }

    printAtKDown(root->left, k-1, vec);
    printAtKDown(root->right, k-1, vec);
}

int printAtKDistance(node* root, int target, int k)
{
    if(root==NULL)
    {
        return -1;
    }

    if(root->data == target)
    {
        printAtKDown(root, k,vec);
        return 0;
    }

    int dl = printAtKDistance(root -> left, target, k);

    if(dl != -1)
    {
        if(k == dl + 1)
        {
            vec.push_back(root->data);
        }

        else
        {
            printAtKDown(root -> right, k - dl - 2, vec);
        }

        return dl + 1;
    }

    int dr = printAtKDistance(root -> right, target, k);

    if(dr != -1)
    {
        if(k == dr + 1)
        {
            vec.push_back(root->data);
        }

        else
        {
            printAtKDown(root -> left, k - dr - 2,vec);
        }

        return dr + 1;
    }

    return -1;
}

int main()
{

    int n;
    cin>>n;

    int in[n];
    int pre[n];

    for(int i=0;i<n;i++)
    {
        cin>>pre[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>in[i];
    }

    node*root=buildTree(pre,in,0,n-1); 
    
    int t;
    cin>>t;
    while(t--)
    {
        int data,dist;
        cin>>data>>dist;

        printAtKDistance(root, data, dist);
        sort(vec.begin(),vec.end());
        if(vec.size()==0){
            cout<<0;
        } else{
            for(int i=0;i<vec.size();i++)
                cout<<vec[i]<<" ";
        }
        cout<<endl;
        vec.clear();
    }
} 
