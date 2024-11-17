#include<iostream>
using namespace std;
int main () {

    int n,i,flag=0;
    cout<<"Enter the number: ";
    cin>>n;

/// if n is a number them the largest factor of the given number is n (same number), and the second largest factor is n/2. 
// There are no factors between n/2 and n. So we dont need to check that.So only check upto n/2 for the factors case.

// The condition of the prime number is, if there are no factors between  (2 to n/2 or 2 to less than n )then its prime number. Otherwise its not prime.

// The program use break statement because there is no need to check all condition. 
// If a number between 1 to n/2 is once divisible by the number , then its not prime. So there is no need to check the divisible condition again.

    for (i=2;i<=n/2;i++) { // also for (i=2;i<n;i++) .But its not efficient.
        if (n%i==0) {
            cout<<"The number "<<n<<" is not prime";
            flag++;
            break;
        }
    }

    if (flag==0)
        cout<<"The number "<<n<<" is prime";

    return 0;
}