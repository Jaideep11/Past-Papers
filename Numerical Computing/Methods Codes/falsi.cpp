#include<bits/stdc++.h>
using namespace std;
float equation(float x);
int main()
{
	float c0,c1,y,yy,yyy,eq0,eq1,de;
	cout<<"x0:  x1: ?";
	cin>>c0>>c1;
	cout<<"I\t\tx0\t\t\tx1\t\t\tf(x0)\t\t\tf(x1)\t\t\t\tx2\t\t\t\tf(x2)n\n";
	for(int i=0;i<5;i++)
	{	
		eq0=equation(c0);
		eq1=equation(c1);
		y=(c0*eq1)-(c1*eq0);
		yy=eq1-eq0;
		yyy=(float) y/yy;
		cout<<i+1<<"\t\t"<<fixed<<setprecision(6)<<c0<<"\t\t"<<c1<<"\t\t"<<eq0<<"\t\t"<<eq1<<"\t\t"<<yyy<<"\t\t"<<equation(yyy)<<endl<<endl;
		if(equation(yyy)>0)
		c1=yyy;
		else if(equation(yyy)<0)
		c0=yyy;
	}
}
float equation(float x)
{
	return ((x*x)-6);
}
