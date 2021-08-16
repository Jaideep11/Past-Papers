#include<bits/stdc++.h>
using namespace std;
float equation(float x);
float der(float x);
int main()
{
	float c,y,eq,de;
	cout<<"x0: ?";
	cin>>c;
	cout<<"I\t\tx0\t\t\tf(x0)\t\t\tf'(x0)\t\t\tx1\n\n";
	for(int i=0;i<4;i++)
	{	
		eq=equation(c);
		de=der(c);
		y=c-((float)eq/de);
		cout<<i+1<<"\t\t"<<fixed<<setprecision(6)<<c<<"\t\t"<<eq<<"\t\t"<<de<<"\t\t"<<y<<endl<<endl;
		c=y;
	}
}
float equation(float x)
{
	return ((log(x-1))+(cos(x-1)));
}
float der(float x)
{
	return ((float)(1/(x-1))-sin(x-1));
}
