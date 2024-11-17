#include<iostream>
using namespace std;
int main () {
    float phy,chem,maths,tm;
    cout<<"Enter the marks of phy,chem,maths: ";
    cin>>phy>>chem>>maths;
    tm=phy+chem+maths;

    if (tm>=240)
        cout<<"your mark is "<<tm<<", A grade";
    else if (tm>=180 && tm<240) 
        cout<<"your mark is "<<tm<<", B grade";
    else if (tm >=150 && tm<180 )
        cout<<"your mark is "<<tm<<", C grade";
    else if (tm>=120 && tm<150)
        cout<<"your mark is "<<tm<<", D grade";
    else
        cout<<"your mark is "<<tm<<", E grade";
    
return 0;
}