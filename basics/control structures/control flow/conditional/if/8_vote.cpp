#include<iostream>
using namespace std;
int main (void) {

    int age; char choice; bool citizen;
    cout<<"Enter your Age: ";
    cin>>age;
    cout<<" Are you a citizen (Y/N): ";
    cin>>choice;

    if (choice== 'y' || choice=='Y' ) 
        citizen=true;
    else 
    
        citizen=false;
    
    if (age>=18) {
        if (citizen) 
            cout<<" Your age is "<<age<<", you are eligible to vote";
        else 
            cout<<" Your age is "<<age<<", you are not eligible to vote";
    }

    else
 
        cout<<" Your age is "<<age<<", you are not eligible to vote";

/*      also 
    -------------------

     cout<<"Are you a citizen (Y/N): ";
    cin>>choice;

    if (choice=='y' || choice=='Y')
        citizen=true;
    else 
        citizen=false;

    if (age>=18 && citizen)
        cout<<"Your age is "<<age<<", you are eligible to vote ";
    else 
        cout<<"Your age is "<<age<<", you are not eligible to vote ";
*/

return 0;
}