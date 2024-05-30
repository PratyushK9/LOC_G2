#include<iostream>
using namespace std;
int main(){
    int a;int sum=0;int digit;
    cout << "enter a number: 1";
    cin >> a;
    while (a>0){
      digit=a%10;
      sum +=digit;
      a=a/10;
    }cout << "sum of digit is "<< sum<< endl;
}   