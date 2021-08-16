#include<iostream>
using namespace std;
 
void heapify(int Array[], int n, int i) 
{ 
    int largest=i; 
    int left=2*i+1; 
    int right=2*i+2;  
  
    if (left<n && Array[left]>Array[largest]) 
 	{
        largest=left; 
	}
    if (right<n && Array[right]>Array[largest]) 
    {
	    largest=right; 
	}
    if (largest!=i) 
	{ 
        swap(Array[i], Array[largest]); 
        heapify(Array, n, largest); 
    } 
} 
  
void heapSort(int Array[], int n) 
{ 
    for (int i=n/2-1;i>=0;i--) 
    {
	    heapify(Array, n, i); 
	}
  
    for (int i=n-1;i>=0;i--) 
	{ 
        swap(Array[0], Array[i]); 
        heapify(Array, i, 0); 
    } 
} 

int main() 
{ 
    int Array[100],n;               
    cout<<"Enter the total numbers of elements in an array: ";
    cin>>n;
    cout<<"Enter the elements.\n";  
    for(int i=0;i<n;i++)
    {
    	cin>>Array[i];
	}
  
    heapSort(Array, n); 
    cout << "\nHeap Sorted array is:  "; 
    for (int i=0;i<n;i++) 
    {
        cout<< Array[i]<< " "; 
	}
} 
