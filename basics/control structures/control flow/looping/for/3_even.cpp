#include<iostream>
using namespace std;
int main () {

    int i,n;

    cout<<"Enter the number: ";
    cin>>n;

    for (i=2;i<=n;i+=2) {
        cout<<"\n"<<i;
    }
    return 0;
}