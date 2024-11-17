#include<iostream>
using namespace std;
int main (void) {

    int n;
    cout<<"Enter a number: ";
    cin>>n;

// since the arithmetic operator have high procedence than the relational operator the statement n%2 is evaluated first, then that result is compared to zero
// a number is even if when divided by two, the remainder equals zero ( divisible by 2 ) 

    if (n%2==0) 
      cout<<"The number is even ";

return 0;
}