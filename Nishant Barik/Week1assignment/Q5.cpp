
#include<iostream>
using namespace std;
#define pi 22.0/7.0
int main()
{
	double r,d,c,a;
	cout<<"Enter the radius of a circle"<<endl;
	cin>>r;
	d=2*r;
	c=2*pi*r;
	a=pi*r*r;
	cout<<"The diameter of the circle is:"<<d<<endl;
	cout<<"The circumference of circle is:"<<c<<endl;
	cout<<"The area of circle is:"<<a<<endl;
}
