#include<iostream>
using namespace std;
int main () {
    int a,b,c;
    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;
    if (a>b && a>c)
        cout<<a<<" is greater"<<endl;
    else if (b>a && b>c)
        cout<<b<<" is greater"<<endl;
    else 
        cout<<c<<" is greater"<<endl;
 return 0;   
}