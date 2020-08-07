#include<iostream>
#include<queue>
#include<math.h>
using namespace std;
class node {
public:
	int data;
	node* left;
	node* right;
	node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};
node* buildtreeLevel()
{
	queue<node*>q;
	int d;
	cin >> d;
	node* root = new node(d);
	q.push(root);
	int c1, c2;
	while (!q.empty())
	{
		node* f = q.front();
		q.pop();
		cin >> c1 >> c2;
		if (c1 != -1)
		{
			f->left = new node(c1);
			q.push(f->left);
		}
		if (c2 != -1)
		{
			f->right = new node(c2);
			q.push(f->right);
		}
	}
	return root;
}


void rightViewUtil(node* root,
	int level, int *max_level)
{
	// Base Case 
	if (root == NULL) return;

	// If this is the last Node of its level 
	if (*max_level < level)
	{
		cout << root->data<<" ";
		*max_level = level;
	}

	// Recur for right subtree first,  
	// then left subtree 
	rightViewUtil(root->right, level + 1, max_level);
	rightViewUtil(root->left, level + 1, max_level);
}
void rightView( node* root)
{
	int max_level = 0;
	rightViewUtil(root, 1, &max_level);
}
int main()
{
	node* root = buildtreeLevel();
	//print(root);
	rightView(root);
}
