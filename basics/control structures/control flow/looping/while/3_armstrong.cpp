#include<iostream>
#include<cmath>
using namespace std;
int main () {
        int n,d,t,a=0,l=0;
        cout<<"enter no: ";
        cin>>n;
        t=n;
        while (n!=0) {
            l++;
            n/=10;
        }
        n=t;
        while (n!=0) {
            d=n%10;
            a=a+pow(d,l);
            n/=10;
        }
        
        if (a==t)
            cout<<t<<" is armstrong";
        else
            cout<<t<<" is not armstrong";


return 0;
}