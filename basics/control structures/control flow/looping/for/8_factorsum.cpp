#include<iostream>
using namespace std;
int main () {

    int n,i,fsum=0;
    cout<<"Enter the number: ";
    cin>>n;

    for (i=1;i<=n;i++) {
        if (n%i==0) // factor condition
            fsum=fsum+i;
    }

    cout<<"The sum of factors of number "<<n<<": "<<fsum;
    return 0;
}