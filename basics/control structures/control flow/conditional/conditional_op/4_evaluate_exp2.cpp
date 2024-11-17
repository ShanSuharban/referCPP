#include<iostream>
using namespace std;
int main () {

    int x,result;
    cout<<"Enter the value of x: ";
    cin>>x;

    result=(x<0)?(x*x+2):((x>0)?(x+6):(5));
    cout<<"The result is "<<result;
    
return 0;
}