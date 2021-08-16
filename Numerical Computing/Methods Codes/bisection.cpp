#include<bits/stdc++.h>

float function(float c);
using namespace std;
int main() {
	float a,b,c=0.0,value,avalue,bvalue,cvalue;
	cout<<"a: "<<"b=?";
	cin>>a>>b;

	cout<<"I\ta\tb\tf(a)\tf(b)\tc\tf(c)";
	cout<<endl;
	for(int i=0; i<11; i++) {
		cout<<i+1<<"\t";
		cout<<fixed<<setprecision(4)<<a<<"\t";
		cout<<fixed<<setprecision(4)<<b<<"\t";
		avalue=function(a);
		cout<<fixed<<setprecision(4)<<avalue<<"\t";
		bvalue=function(b);
		cout<<fixed<<setprecision(4)<<bvalue<<"\t";
		c=(float)(a+b)/2;
		cout<<fixed<<setprecision(4)<<c<<"\t";
		cvalue=function(c);
		cout<<cvalue<<endl;
		if(cvalue >0 && avalue >0 )
			a=c;
		else if(cvalue <0 && avalue <0)
			a=c;
		else if(cvalue >0 && bvalue >0 )
			b=c;
		else if(cvalue <0 && cvalue <0)
			b=c;
		c=(float)(a+b)/2;
		cout<<endl;
	}
}
float function(float x) {

	float eq=(x-2^(x));
}
