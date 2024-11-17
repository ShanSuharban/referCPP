#include<iostream>
using namespace std;
int main () {

    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"\nThe factors of number "<<n<<":";
    for(i=1;i<=n;i++) {
        if (n%i==0) // condition to check the factors of a number
            cout<<"\t"<<i;
    }

    return 0;
}