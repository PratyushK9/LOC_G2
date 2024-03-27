#include<iostream>
using namespace std;
int main()
{
	int n,r,s=0;
	cout<<"Enter the number"<<endl;
	cin>>n;
	do
	{
	r=n%10;
	s=s+r;
	n=n/10;	
	}
	while(n!=0);
	cout<<"The sum is: "<<s;
}