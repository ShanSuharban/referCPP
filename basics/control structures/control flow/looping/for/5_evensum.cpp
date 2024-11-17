#include<iostream>
using namespace std;
int main () {

        int n,i,sum=0;

        cout<<"Enter the number: ";
        cin>>n;

        for (i=2;i<=n;i+=2) {
            sum=sum+i;
        }

        cout<<"The sum of first "<<n<<" even number: "<<sum;

    return 0;
}