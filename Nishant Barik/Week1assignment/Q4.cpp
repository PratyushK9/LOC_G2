#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"Enter the operators(+,-,*,/)"<<endl;
	cin>>ch;
	switch(ch)
	{
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			if(b==0)
			cout<<"Division by zero not possible";
			else
			cout<<(double)a/b;
			break;
		default:
			cout<<"Invalid Input";
	}
}