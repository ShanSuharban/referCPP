#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<" Enter the number: ";
    cin>>n;

    if (n%7==0) 
        cout<<"Your number "<<n<<" is divisible by 7"<<endl;
    else 
        cout<<" Your number "<<n<<" is not divisible by 7"<<endl;

return 0;
    
}