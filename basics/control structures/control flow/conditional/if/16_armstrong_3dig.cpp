#include <iostream>
using namespace std;
int main (void) {

    /* 
    
    armstrong numbers: 153,370,371
    if the sum of the cube of each digit in the 3 digit number is equal to the number itself, its called armstrong
    eg: 153-> (1*1*1)+(5*5*5)+(3*3*3)
    
    so we need to split the each term using modulus operator and assign the value of the each terms into different variables
        a=n%10;
    next we use the integer division method to eliminate each last terms we extracted using modulus operator and stored to the same variable n
        n=n/10;
    next we again perform the modulus operator extract the second last term
        b=n%10;
    again we perform the integer division method to eliminate the previous extracted digit
        n=n/10;
    atlast we perform the modulus operation to extract the third last digit
        c=n%10;

    eg:
         153 % 10 = 3
         153/10 = 15 -> integer division
         15 % 10 = 5
         15/10 = 1
         1 % 10 = 1

    */
    
    int n,a,b,c,d;
    cout<<"Enter the 3 digit number: ";
    cin>>n;

    d=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;

    if ((a*a*a)+(b*b*b)+(c*c*c) == d)
        cout<<"The number "<<d<<" is armstrong";
    else 
        cout<<"The number "<<d<<" is not armstrong";

return 0;
}