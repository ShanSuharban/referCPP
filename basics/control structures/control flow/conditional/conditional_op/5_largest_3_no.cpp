#include<iostream>
using namespace std;
int main () {

    int a,b,c,res;
    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;
    res=(a>b && a>c)?a:((b>a && b>c)?b:c);

    cout<<"The largest number is "<<res;

    
return 0;
}