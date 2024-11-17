#include<iostream>
using namespace std;
int main () {

    int a,b,result;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    result=(a>=b)?(a+b):(a*b);
    cout<<"The result is "<<result;
    
return 0;
}