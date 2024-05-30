#include<iostream>
using namespace std;
int main(){
    int a;
    cout <<"enter a number"<< endl;
    cin >> a;
    if (a>0){
        cout <<"It is positive";
    }
    else if (a==0){
        cout<< "It is 0 ";
    }
    else {
        cout << "It is negative";
    }
}