#include<iostream>

using namespace std;

class Node
{
	public:
	int data;
	Node* left_child;
	Node* right_child;
};


//class Btree
//{
//	
//	Node* root;
//	
//};

Node* add(int data)
{
	
	Node* newNode = new Node;
	
	newNode->data = data;
	newNode->left_child = NULL;
	newNode->right_child = NULL;
	
	return newNode;
}

//Inorder //LNR
Traverse_LNR(Node* root)
{
	if (root!=NULL) {
        Traverse_LNR(root->left_child);
        cout<<root->data;
        Traverse_LNR(root->right_child);
    }	
}

//Preorder //NLR
Traverse_NLR(Node* root)
{
	if (root!=NULL) {
		cout<<root->data;
        Traverse_NLR(root->left_child);
        Traverse_NLR(root->right_child);
    }	
}

//Postorder //LRN
Traverse_LRN(Node* root)
{
	if (root!=NULL) {
        Traverse_LRN(root->left_child);
        Traverse_LRN(root->right_child);
        cout<<root->data;
    }	
}


int main()
{
	Node* root = new Node;
	
	root = add(1);
	
	root->left_child = add(2);
	root->right_child = add(3);
	
	root->left_child->left_child = add(4);
	root->left_child->right_child = add(5);
	
	root->right_child->left_child = add(6);
	root->right_child->right_child = add(7);
	
	Traverse_LNR(root);
	cout<<endl;
	
	Traverse_NLR(root);
	cout<<endl;
	
	Traverse_LRN(root);
	cout<<endl;

	
}
