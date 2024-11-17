#include<iostream>
using namespace std;
int main () {
        int n,d,t,rev=0;
        cout<<"Enter number: ";
        cin>>n;
        t=n;
        while (n!=0) {
            d=n%10;
            rev=(rev*10)+d;
            n=n/10;
        } 
        if (rev==t)
            cout<<t<<" is palindrome ";
        else 
            cout<<t<<" is not palindrome ";

return 0;
}