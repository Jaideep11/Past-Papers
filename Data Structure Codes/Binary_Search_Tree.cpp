#include<iostream>

using namespace std;

class Node
{
	public:
	int key;
	Node *left;
	Node *right;

};

Node* newNode (int item)
{
	Node *temp = new Node;
	temp->key = item;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
};

Node* insert(Node* node, int key)
{
	if (node == NULL) return newNode(key); 
  
    if (key < node->key)
    {
    node->left  = insert(node->left, key); 
	}	
	else if (key > node->key) 
	{
    node->right = insert(node->right, key);  
	}

    return node; 
}

void inorder(Node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        cout<<root->key<<endl;
        inorder(root->right); 
    } 
} 

Node* search (Node* root, int key)
{
	if (root == NULL || root->key == key)
	{
	return root;
	} 
    
    // Key is greater than root's key 
    if (root->key < key) 
    {
       return search(root->right, key);	
	}  

    // Key is smaller than root's key 
    return search(root->left, key); 
}

Node * minValueNode(Node* node) 
{ 
    Node* current = node; 
  
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL) 
        current = current->left; 
  
    return current; 
}

Node* deleteNode(Node* root, int key) 
{ 
    // base case 
    if (root == NULL) return root; 
  
    // If the key to be deleted is smaller than the root's key, 
    // then it lies in left subtree 
    if (key < root->key) 
        root->left = deleteNode(root->left, key); 
  
    // If the key to be deleted is greater than the root's key, 
    // then it lies in right subtree 
    else if (key > root->key) 
        root->right = deleteNode(root->right, key); 
  
    // if key is same as root's key, then This is the node 
    // to be deleted 
    else
    { 
        // node with only one child or no child 
        if (root->left == NULL) 
        { 
            Node *temp = root->right; 
            delete[] root; 
            return temp; 
        } 
        else if (root->right == NULL) 
        { 
            Node *temp = root->left; 
            delete[] root; 
            return temp; 
        } 
  
        // node with two children: Get the inorder successor (smallest 
        // in the right subtree) 
        Node* temp = minValueNode(root->right); 
  
        // Copy the inorder successor's content to this node 
        root->key = temp->key; 
  
        // Delete the inorder successor 
        root->right = deleteNode(root->right, temp->key); 
    } 
    return root; 
}  

int main()
{
	Node* root = NULL; 
    root = insert(root, 50); 
    root = insert(root, 30); 
    root = insert(root, 20); 
    root = insert(root, 40); 
    root = insert(root, 70); 
    root = insert(root, 60); 
    root = insert(root, 80); 
    root = insert(root, 45); 
    
	//inorder(root);
    
//    Node* temp = NULL;
//    
//    temp = search(root, 80);
//    
//    cout<<temp->key<<endl;

	//root = deleteNode(root, 20);
	root = deleteNode(root, 50);
	
	inorder(root);
	
    
    
	return 1;
}
