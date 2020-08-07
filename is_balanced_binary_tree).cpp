#include<iostream>
#include<cstring>
using namespace std;
class node{
	public:
	int data;
	node*left;
	node*right;
	node(int d){
	data=d;
	left=right=NULL;
	}
};
node*buildtree(string s){
	if(s=="true"){
	int d;
	cin>>d;
	node*root=new node(d);
	string l;
	cin>>l;
	if(l=="true"){
	root->left=buildtree(l);
	}
	string r;
	cin>>r;
	if(r=="true"){
	root->right=buildtree(r);
	}
	return root;
	}
	return NULL;
}
class HB{
	public:
	int height;
	bool balance;
};
HB isheight(node*root){
	HB p;
	if(root==NULL){
	p.height=-1;
	p.balance=1;
	return p;
	}
	HB left=isheight(root->left);
	HB right=isheight(root->right);
	p.height=max(left.height,right.height)+1;
	if(left.height-right.height<=1&&left.balance&&right.balance){
	p.balance=true;
	}
	else{
	p.balance=false;
	}
	return p;
}
void print(node*root){
if(root==NULL){
	return;
}
cout<<root->data<<" ";
print(root->left);
print(root->right);
}
int main(){
	node*root=NULL;
	root=buildtree("true");
	if(isheight(root).balance){
	cout<<"true";
	}
	else{
	cout<<"false";
	}
}
