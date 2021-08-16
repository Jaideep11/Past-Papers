#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	cout<<"3-point formula\n";
	float x[5]={1, 2 ,3, 4, 5};
	
	float  fx[5]={2.4142 ,2.6734, 2.8974 ,3.0976, 3.2804};
//	for(int i;i<4;i++)
//	{
//		cout<<"enter the X"<<i;
//		cin>>x[i];
//		cout<<"enter the Fx"<<i;
//		cin>>fx[i];
//		
//	}
	float h=.2;
//	cout<<"enter the h";
//	cin>>h;
	
	cout<<"3-end point\n";
	cout<<"X       Fx         fx'  \n";
	for(int i=0;i<1;i++)
	{
		cout<<x[i]<<"   "<<fx[i]<<"    "<<(-3*fx[i]+4*fx[i+1]-fx[i+2])/(2*h)<<"\n";
	}
	//cout<<"mid point\n"
//	cout<<"X       Fx         fx'  \n";
    cout<<x[1]<<"   "<<fx[1]<<"    "<<(fx[2]- fx[0])/(2*h)<<"\n";
	cout<<x[2]<<"   "<<fx[2]<<"    "<<(fx[3]-fx[1])/(2*h)<<"\n";
	cout<<x[3]<<"   "<<fx[3]<<"    "<<(-3*fx[3]+4*fx[2]-fx[1])/(-2*h)<<"\n";
	
	
	
}
