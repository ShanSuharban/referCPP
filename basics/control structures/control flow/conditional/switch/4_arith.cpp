#include<iostream>
using namespace std;
int main () {
    int a,b,choice;
    cout<<"Enter the 2 numbers: ";
    cin>>a>>b;

    cout<<"\n\t 1.Addition \n\t 2.Subtraction \n\t 3.Multyplication \n\t 4.Division \n\t 5.Modulus \n\n\t Enter your choice: ";
    cin>>choice;

    switch (choice) {
        case 1: cout<<"\t sum: "<<(a+b);break;
        case 2: cout<<"\t sub: "<<(a-b);break;
        case 3: cout<<"\t multy: "<<(a*b);break;
        case 4: cout<<"\t div: "<<(a/b);break;
        case 5: cout<<"\t mod: "<<(a%b);break;
        default: cout<<"\t invalid choice !!!";

    }


return 0;
}