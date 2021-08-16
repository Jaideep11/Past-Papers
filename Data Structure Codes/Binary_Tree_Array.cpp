#include<bits/stdc++.h> 
using namespace std; 
char tree[10]; 
int root(char key) 
{ 
    if(tree[0] != '\0') 
        cout << "Tree already had root"; 
    else
        tree[0] = key; 
    return 0; 
} 
  
int set_left(char key, int parent) 
{  
    if(tree[parent] == '\0') 
        cout << "\nCan't set child at" 
             << (parent * 2) + 1  
             << " , no parent found"; 
    else
        tree[(parent * 2) + 1] = key; 
        if(set_left(tree[(parent*2)+1]==NULL,parent))
        {
        	cout<<"not a complete tree.";
		}
		else
		cout<<"complete tree exists";
    return 0; 
} 
  
int set_right(char key, int parent) 
{ 
    if(tree[parent] == '\0') 
        cout << "\nCan't set child at" 
             << (parent * 2) + 2 
             << " , no parent found"; 
    else
        tree[(parent * 2) + 2] = key; 
           if(set_right(tree[(parent*2)+1]==NULL,parent))
        {
        	cout<<"not a complete tree.";
		}
			else
		cout<<"complete tree exists";
    return 0; 
} 
  
int print_tree() 
{ 
    cout << "\n"; 
    for(int i = 0; i < 10; i++) 
    { 
        if(tree[i] != '\0') 
            cout << tree[i]; 
        else
            cout << "-"; 
    } 
    return 0; 
} 
  
// Driver Code 
int main() 
{ 
    root('A'); 
//    insert_left('B',0); 
    set_right('C', 0); 
    set_left('Z', 0); 
    set_left('D', 1); 
    set_right('E', 1); 
//    set_left('F', 2); 
    print_tree(); 
    return 0; 
} 
