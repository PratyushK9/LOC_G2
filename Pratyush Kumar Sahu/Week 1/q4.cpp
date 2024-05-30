/*enter two number and perform all arithmtic operations using switch case statement*/
#include<iostream>
using namespace std;
int main(){
   int a,b;char c;
   cout << "Enter two numbers"<< endl;
   cin >> a >> b;
   cout << "Enter the operation you want to perform + - * / % "<< endl;
   cin >> c;
   switch (c)
   {
   case '+':
    cout << "the sum is "<< a+b;
    break;
   
   case '-':
    cout << "the subtraction is "<< a-b;
    break;

    case '*':
    cout << "the sum is "<< a*b;
    break;

    case '/':
    cout << "the division is "<< a/b;
    break;

    case '%':
    cout << "the remainder is "<< a%b;
    break;
   default:
   cout << "invalid operator";
    break;
   }
}