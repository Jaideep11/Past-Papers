#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	cout<<"5-point formula\n";
	float x[6]={1 ,2, 3, 4, 5};
	
	float  fx[6]={5 ,14, 51 ,124 ,245};
//	for(int i;i<6;i++)
//	{
//		cout<<"enter the X"<<i;
//		cin>>x[i];
//		cout<<"enter the Fx"<<i;
//		cin>>fx[i];
//		
//	}
	float h=.2;
//	cout<<"enter the h";
	//cin>>h;
	
	cout<<"5-end point\n";
	cout<<"X       Fx         fx'  \n";
	 cout<<x[0]<<"   "<<fx[0]<<"    "<<(-25*fx[0]+48*fx[1]-36*fx[2]+16*fx[3]-3*fx[4])/(12*h)<<"\n";
     cout<<x[1]<<"   "<<fx[1]<<"    "<<(-25*fx[1]+48*fx[2]-36*fx[3]+16*fx[4]-3*fx[5])/(12*h)<<"\n";
	 cout<<x[2]<<"   "<<fx[2]<<"    "<<(fx[0]-8*fx[1]+8*fx[3]-fx[4])/(12*h)<<"\n";
	  cout<<x[3]<<"   "<<fx[3]<<"    "<<(fx[1]-8*fx[2]+8*fx[4]-fx[5])/(12*h)<<"\n";
	  cout<<x[4]<<"   "<<fx[4]<<"    "<<(-25*fx[4]+48*fx[3]-36*fx[2]+16*fx[1]-3*fx[0])/(-12*h)<<"\n";
    // cout<<x[5]<<"   "<<fx[5]<<"    "<<(-25*fx[5]+48*fx[4]-36*fx[3]+16*fx[2]-3*fx[1])/(-12*h)<<"\n";
	
}
