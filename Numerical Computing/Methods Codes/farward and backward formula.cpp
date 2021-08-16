#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the values of no of x";
	cin>>n;
	float x[n];
	float fx[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the values of x"<<i<<endl;
		cin>>x[i];
		cout<<"enter the value of fx"<<i<<endl;
		cin>>fx[i];
		
	}
  float h;
   cout<<"enter the h";
   cin>>h;
   
   cout<<"forward formula\n";
  	cout<<"X       Fx         fx'  \n";
   for(int i=0;i<n-1;i++)
   {
   	  cout<<x[i]<<"   "<<fx[i]<<"    "<<(fx[i+1]-fx[i])/h;
   	  cout<<"\n";
   }
   cout<<"\nbackward formula\n";
   	cout<<"X       Fx         fx'  \n";
    for(int i=n-1;i>0;i--)
   { 
   	 cout<<x[i]<<"   "<<fx[i]<<"    "<<(fx[i-1]-fx[i])/(-h);
   	  cout<<"\n";
   }
   
}
