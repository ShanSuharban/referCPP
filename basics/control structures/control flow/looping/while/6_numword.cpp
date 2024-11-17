#include<iostream>
using namespace std;
int main () {
        int n,d,rev,x;
        cout<<"Enter number: ";
        cin>>n;
        n=(n*10)+1;           
        while (n!=0) {
            d=n%10;
            rev=(rev*10)+d;
            n=n/10;
        }
        while (rev!=1) {                  // normal: 100 -> 001 -> 1 -> one
            x=rev%10;                    // this : 100 -> 1001 -> 1001 -> one zero zero one -> one zero zero 
            switch (x) {
                case 0: cout<<" zero";break;
                case 1: cout<<" one";break;
                case 2: cout<<" two";break;
                case 3: cout<<" three";break;
                case 4: cout<<" four";break;
                case 5: cout<<" five";break;
                case 6: cout<<" six";break;
                case 7: cout<<" seven";break;
                case 8: cout<<" eight";break;
                case 9: cout<<" nine";break;
            }
            rev=rev/10;
        }

return 0;
}