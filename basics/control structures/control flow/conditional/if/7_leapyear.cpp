#include<iostream>
using namespace std;
int main () {
/* Leap Year condition
    Every year that is divisible by 4 is a leap year -> 4,8,366,340
    But the century is not a leap year, except multyples of 4th centuries -> 100,200,300
    But every 4th century is a leap year -> 400,800,1200,2000


    so the final condition: The year should be divisible by 4 and not divisible by 100 or the year is divisible by 400.

    eg: in the case of year 400, it is divisible by 4 and divisible by 100 and also divisible by 400.
        in first condition y%4==0 will become true, but y%100!=0 becomes false because its divisible by 100.
        so the overall expression (y%4==0 && y%100!=0) will becomes false 
        then it checks the 400 is divisible by 400 or not.Yes its divisible by 400
        so the expression (y%400==0) becomes true.
        since the entire expression is written in if condition using logical or operator, if any one expression is true the entire if statement becomes true
        in this case ((true && false) || true)
        that becomes (false || true)
        that becomes true.
*/

int y;
cout<<" Enter the year: ";
cin>>y;

if ((y%4==0 && y%100!=0 )|| y%400==0) 
    cout<<" The year "<<y<<" is leap year";
else
    cout<<" The year "<<y<<" is not a leap year";

return 0;
}