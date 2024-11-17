#include<iostream>
using namespace std;
int main () {

    int x,y;
    cout<<"Enter the value of x: ";
    cin>>x;

    y=(x<5)?(x*x+5*x+2):(x+6);
    cout<<"The value of y is: "<<y;

return 0;
}