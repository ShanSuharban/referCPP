#include<iostream>
using namespace std;
int main () {

// we need to repeat b times a and store it in the result.

    int i,a,b,result=1;
    cout<<"Enter the value of a and b (a^b): ";
    cin>>a>>b;

    for (i=1;i<=b;i++) {
        result=result*a;
    }

    cout<<"The value of "<<a<<"^"<<b<<": "<<result;
    return 0;
}