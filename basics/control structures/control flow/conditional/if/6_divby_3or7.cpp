#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<" Enter the number: ";
    cin>>n;

    if (n%7==0 || n%3==0) 
        cout<<" The number "<<n<<" is divisible by 3 or 7";
    else
        cout<<" The number "<<n<<" is not divisible by 7";

return 0;
}