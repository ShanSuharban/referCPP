#include<iostream>
using namespace std;
int main (void) {

int n;
cout<<" Enter a number except zero: ";
cin>>n;

if (n%2==0) {
    cout<<" Number is even"<<endl;
    cout<<" Number is not odd"<<endl;
}
else {
    cout<<" Number is not even"<<endl;
    cout<<" Number is odd";
}

return 0;
}