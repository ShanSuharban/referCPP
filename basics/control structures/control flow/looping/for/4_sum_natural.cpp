#include<iostream>
using namespace std;
int main () {
    int n,i,sum=0;
    cout<<"Enter the number: ";
    cin>>n;

    for (i=1;i<=n;i++) {
        sum=sum+i;
    }
    cout<<"The sum of "<<n<<" natural number: "<<sum;
    return 0;
}