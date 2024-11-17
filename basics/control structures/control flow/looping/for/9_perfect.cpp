#include<iostream>
using namespace std;
int main () {

int i,n,sum=0;
cout<<"Enter the number: ";
cin>>n;

// if n is a number them the largest factor of the given number is n (same number), and the second largest factor is n/2. 
// There are no factors between n/2 and n. So we dont need to check that.So only check upto n/2.

for (i=1;i<=n/2;i++) { // also for (i=1;i<n;i++)
    if (n%i==0) 
        sum=sum+i;
}

if (n==sum)
    cout<<"The number "<<n<<" is perfect";
else 
    cout<<"The number "<<n<<" is not perfect";

return 0;

}