#include<iostream>
using namespace std;
int main () {

// This is also a factorial of a given no: 
    int n,i,pdt=1;
    cout<<"Enter the number: ";
    cin>>n;

    for (i=1;i<=n;i++) {
        pdt=pdt*i;
    }

    cout<<"The product of first "<<n<<" natural number: "<<pdt;

}