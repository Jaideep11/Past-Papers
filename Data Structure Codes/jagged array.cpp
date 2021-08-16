#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j;
	string temp[7]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	cout<<"enter the total number of days: ";
	cin>>row;
	int a[row];
	cout<<"enter the number of times dollar spent in a week for each day."<<endl;
	for(i=0;i<row;i++)
	{
		cout<<temp[i]<<" - ";
		cin>>a[i];
	}
	int* b[row];
	for(i=0;i<row;i++)
	{
		b[i]=new int [a[i]];
	}
	cout<<"\nenter the dollar spent on each days in a week."<<endl;
	
	for(i=0;i<row;i++)
	{
		cout<<temp[i]<<" - "<<endl;
	for(j=0;j<a[i];j++)
	{
		cin>>b[i][j];
	}
	}
	cout<<"\nAfter jagging\n"<<endl;
	for(i=0;i<row;i++)
	{
		cout<<temp[i]<<" - ";
		for(j=0;j<a[i];j++)
		{
			cout<<b[i][j]<<" , ";
		}
		cout<<"\n";
	}
}
