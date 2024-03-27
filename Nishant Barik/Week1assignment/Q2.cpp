#include<iostream>
using namespace std;
int main()
{
	double a;
	cout<<"Enter the number to be checked"<<endl;
	cin>>a;
	if(a>0)
	cout<<a<<" is positive number";
	else if(a<0)
	cout<<a<<" is negative number";
	else
	cout<<"It is zero";
}