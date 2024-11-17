#include<iostream>
using namespace std;
int main (void) {

        int age;
        cout<<"Enter the age: ";
        cin>>age;

         if (age>12)
         {
            if (age>=65)
                cout<<"Your age is "<<age<<", admission is free";
            else 
                cout<<"Your age is "<<age<<", you have to pay";
         }

        else 
            cout<<"Your age is "<<age<<", admission is free";

    /*      Also 
        -------------------------

    cout<<"Enter the age: ";
    cin>>age;

    if (age<=12 || age>=65)
        cout<<"Your age is "<<age<<", your admission is free";
    else 
        cout<<"Your age is "<<age<<", you have to pay";
    */

return 0;
}