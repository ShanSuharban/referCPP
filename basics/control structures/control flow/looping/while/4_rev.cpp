#include<iostream>
using namespace std;
int main () {
        int n,rev=0,d;
        cout<<"Enter a number: ";
        cin>>n;
        while (n!=0) {
            d=n%10;
            rev=(rev*10)+d;
            n=n/10;
        }
    cout<<"reverse: "<<rev;
return 0;    
}