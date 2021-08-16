#include<iostream>

using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}

bubbleSort(int arr[], int n)
{
	cout<<"Bubble sort"<<endl;
	int i, j;
	int count=0;  
    for (i = 0; i < n-1; i++)      
    {// Last i elements are already in place  
    for (j = 0; j < n-1; j++)  
        {
        cout<<i<<"      "<<j<<endl;
		if (arr[j] > arr[j+1]) 
			{
		//	count++;
		//	cout<<count<<endl; 
            swap(&arr[j], &arr[j+1]);
        	}
		}	
	}
}

void selectionSort(int arr[], int n)  
{  
	cout<<endl<<endl<<"Selection Sort"<<endl<<endl;
    int i, j, min_idx;  
    int count=0;
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n-1; i++)  
    {  
    	//cout<<i<<"     ";
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n; j++) 
		{
		cout<<i<<"    "<<j<<endl;
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element   
		}
		//count++;
        //cout<<count<<endl;
		swap(&arr[min_idx], &arr[i]);
		//cout<<endl;	
    }  
}

void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    cout<<endl<<"Insertion Sort"<<endl;
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
        	cout<<i<<"       "<<j<<endl;
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }
		cout<<endl;  
        arr[j + 1] = key;  
    }  
} 

merge(int a[], int lb, int mid, int ub)
{
	int i = lb;
	int j = mid+1;
	int k = lb;
	int b[6] = {};
	
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k] = a[i];
			i++;
			k++;
		}
		else
		{
			b[k] = a[j];
			j++;
			k++;
		}
	}	
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k] = a[j];
			j++;
			k++;
		}	
	}	
	else
	{
		while(i<=mid)
		{
			b[k] = a[i];
			i++;
			k++;
		}
	}
	
	for(k=lb; k<=ub; k++)
	{
		a[k] = b[k];
	}	
}

void mergeSort(int arr[], int lb, int ub)
{
	if(lb < ub)
	{
		int mid = (lb+ub)/2;
		mergeSort(arr, lb, mid);
		mergeSort(arr, mid+1, ub);
		merge(arr, lb, mid, ub);
	}	
   
}

int Partition(int a[], int lb, int up)
{
	int pivot; 
	pivot = a[lb];
	int i = lb;
	int j = up;
while(i<j)
{
	while (a[i] <= pivot)
	{
		i++;
	} 	
	while (a[j]>pivot)
	{
		j--;
	}	
	if(i<j)
	{
		swap(a[i], a[j]);
	}	
}
swap(a[lb], a[j]);
return j;
}

int loc;

quickSort (int arr[], int lb, int ub) 
{
	if(lb<ub)
	{
		loc = Partition(arr, lb, ub);  
		quickSort(arr, lb, loc-1); 
		quickSort(arr, loc+1, ub); 
	}
}

void printArray(int arr[], int size)  
{  
    int i;  
    cout<<endl<<endl;
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
} 


main()
{
	int arr[] = {6,5,4,3,2,1};
	bubbleSort(arr, 6);
	cout<<endl<<"Sorted Array After Bubble Sort";
	printArray(arr, 6); 
	cout<<endl;
	int arr2[] = {10,9,8,7,6,5,4,3,2,1};
	selectionSort(arr2, 10);
	cout<<endl<<"Sorted Array After Selection Sort";
	printArray(arr2, 10);
	cout<<endl;
	int arr3[] = {6,5,4,3,2,1};
	insertionSort(arr3, 6);
	cout<<endl<<"Sorted Array After Insertion Sort";
	printArray(arr3, 6);
	int arr4[] = {6,5,4,3,2,1};
	mergeSort(arr4, 0,5);
	cout<<endl<<"Sorted Array After Merge Sort";
	printArray(arr4, 6);
	cout<<endl;
	int arr5[] = {6,5,4,3,2,1};
	quickSort(arr5, 0, 5);
	cout<<endl<<"Sorted Array After Quick Sort";
	printArray(arr5, 6);
	cout<<endl;
}
