#include<iostream>
#include<math.h>
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
//Use a fixed-point iteration method to determine a solution accurate to within 10-2 for x4-3x2-3 = 0
//on [1, 2]. Use p0 = 1. test case 1
//Use a fixed-point iteration method to determine a solution accurate to within 10-2 for x3 -x -1 = 0
//on [1, 2]. Use p0 = 1. test case 2
float f1(float x)
{
	return x*x*x*x-3*x*-3;
}
float g1(float x)
{ 
	float v=1+1/x;
	return pow(v,.5);
}
float f2(float x)
{
	return x*x*x-x-1;
}
float g2(float x){
	
	float v=1+1/x;
	return pow(v,.5);
}
using namespace std;
int main()
{

	
	float Po,x;
//	cout<<"writer the equation which has g(x)'<1 "
//	cin>>x;
	cout<<"enter the intial values\n P0";
	cin>>Po;
	int N;
	cout<<"enter the number the of iteration\n";
	cin>>N;
 cout<< endl<<"**************************"<< endl;
	 cout<<"Fixed Point Iteration Method"<< endl;
	 cout<<"**************************"<< endl;

     cout	   <<"count      g(x)           f(x) \n";
	for(int i=0;i<N;i++)
	{   x=g2(Po);
		cout<<i+1<<" "<<"      "<<setprecision(9)<<x<<"    "<<f2(x)<<"\n";
	    	Po=x;
	}
}
