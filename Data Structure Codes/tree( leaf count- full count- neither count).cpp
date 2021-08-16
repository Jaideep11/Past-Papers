#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* left_child;
		node* right_child;
};
	int sum=0;
	int sum1=0;
	int sum2=0;
node* insert(int data)
{
	node* temp=new node;
	temp->data=data;
	temp->left_child=NULL;
	temp->right_child=NULL;
	return temp;
}
int count_leaf(node* root)
{
 if(root != NULL)
            {
                count_leaf(root->left_child);
                if((root->left_child == NULL) && (root->right_child == NULL))
                {
                    sum++;
                }
                count_leaf(root->right_child);
            }
            return sum;
}

int count_full(node* root)
{
	if(root!=NULL)
	{
		if(root->left_child!=NULL && root->right_child!=NULL)
		{
			sum1++;
			count_full(root->left_child);		
			count_full(root->right_child);
		}
		else
		{
			return 0;
		}
	}
	return sum1;
}

int neither(node* root)
{
	if(root!=NULL)
	{
		neither(root->left_child);
		if((root->left_child!=NULL && root->right_child==NULL)|| (root->right_child!=NULL && root->left_child==NULL))
		{
			sum2++;
		}
		neither(root->right_child);
	}
	return sum2;
}
int main()
{
	node* root =new node;
	root=insert(2);
	root->left_child=insert(4);
	root->right_child=insert(6);
	root->right_child->right_child=insert(11);
	root->right_child->left_child=insert(15);
	root->left_child->left_child=insert(3);
	root->left_child->right_child=insert(1);
	root->left_child->left_child->right_child=insert(5);
	root->left_child->left_child->left_child=insert(7);
	root->left_child->right_child->left_child=insert(8);
	
	cout<<"total number of Leaf count are: "<<count_leaf(root);
	cout<<"\ntotal number of Full count are: "<<count_full(root);
	cout<<"\ntotal number of Neither count are: "<<neither(root);
}
