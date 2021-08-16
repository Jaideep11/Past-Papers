#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
using namespace std;


void input(float arr[3][4])
{
	cout<<"Enter 1st equation: "<<endl;
	cout<<"x0 :";
	cin>>arr[0][0];
	cout<<"y0 :";
	cin>>arr[0][1];
	cout<<"z0 :";
	cin>>arr[0][2];
	cout<<" = ";
	cin>>arr[0][3];
	cout<<"Enter 2nd equation: ";
	cout<<"x1 :";
	cin>>arr[1][0];
	cout<<"y1 :";
	cin>>arr[1][1];
	cout<<"z1 :";
	cin>>arr[1][2];
	cout<<" = ";
	cin>>arr[1][3];
	cout<<"Enter 3rd equation: ";
	cout<<"x2 :";
	cin>>arr[2][0];
	cout<<"y2 :";
	cin>>arr[2][1];
	cout<<"z2 :";
	cin>>arr[2][2];
	cout<<" = ";
	cin>>arr[2][3];
	
}	
int solution(float arr[3][4])
{
	float x,y,z;
	int a,b,c;
	a = arr[0][0];
	b = arr[1][1];
	c = arr[2][2];
	int iter;
	cout<<"Enter initial values of y and z: ";
	cin>>y;
	cin>>z;
	cout<<"Enter number of iteration: ";
	cin>>iter;
	cout<<endl;
	for(int i=0;i<iter;i++)
	{
		x = (arr[0][3]-(arr[0][1]*y)-(arr[0][2]*z))/a;
		y = (arr[1][3]-(arr[1][0]*x)-(arr[1][2]*z))/b;
		z = (arr[2][3]-(arr[2][1]*y)-(arr[2][0]*x))/c;
		cout<<"Iteration# "<<i+1<<"\t";
		cout<<"x = "<<x<<"\t\t\t"<<"y = "<<y<<"\t\t\t"<<"z = "<<z<<endl;
	}
	
}
int main()
{
	float arr[3][4];
	input(arr);
	solution(arr);
}
