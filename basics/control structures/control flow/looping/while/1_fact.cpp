#include <iostream>
using namespace std;
int main () {
        int n,fact=1,i;
        cout<<"Enter the number: ";
        cin>>n;

        i=n;                            // i=1
        while (i>=1) {                  // while (i<=n) { i++ }
            fact=fact*i;
            i--;
        }

        cout<<"Factorial of "<<n<<" is "<<fact;

    return 0;
}