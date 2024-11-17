#include<iostream>
using namespace std;
int main () {

        int d,i,sum=0,n,t;
        cout<<"Enter the number: ";
        cin>>n;

        t=n; // n is copied to t, inorder to print the number to output , after loop n=0.

        while (n!=0) {
            d=n%10;
            sum=sum+d;
            n=n/10;
        }

        cout<<"sum of the digits of "<<t<<" is "<<sum;

    return 0;
}