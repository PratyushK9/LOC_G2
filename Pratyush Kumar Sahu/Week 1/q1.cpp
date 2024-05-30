#include<iostream>
using namespace std;
int main(){
    int m=1;
    while (m<=100){
        if (m%3==0 && m%5==0){
          cout << "fizzbuzz" <<endl;
        }
        else if (m%3==0)
          { cout<< "fizz"<<endl;}
        else if (m%5==0){
            cout <<"buzz"<< endl;
        }  
        else 
          {cout<<m<< endl;}
        m=m+1;
    }
}