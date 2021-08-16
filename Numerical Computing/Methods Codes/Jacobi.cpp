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
	cout<<"Enter 2nd equation: "<<endl;
	cout<<"x1 :";
	cin>>arr[1][0];
	cout<<"y1 :";
	cin>>arr[1][1];
	cout<<"z1 :";
	cin>>arr[1][2];
	cout<<" = ";
	cin>>arr[1][3];
	cout<<"Enter 3rd equation: "<<endl;
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
	float x0=0,y0=0,z0=0,x,y,z;
	int a,b,c;
	a = arr[0][0];
	b = arr[1][1];
	c = arr[2][2];
	int iter;
	cout<<"Enter number of iteration: ";
	cin>>iter;
	cout<<endl;
	for(int i=0;i<iter;i++)
	{
		x = (arr[0][3]-(arr[0][1]*y0)-(arr[0][2]*z0))/a;
		y = (arr[1][3]-(arr[1][0]*x0)-(arr[1][2]*z0))/b;
		z = (arr[2][3]-(arr[2][1]*y0)-(arr[2][0]*x0))/c;
		x0=x;
		y0=y;
		z0=z;
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
