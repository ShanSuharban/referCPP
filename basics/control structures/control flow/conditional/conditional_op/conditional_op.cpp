#include<iostream>
using namespace std;
int main (void) {
    /*
    ?: is callled the conditional operator 
    It requires three operands relational exp and two conditional statement.
    So it is called the ternary operator.

     syntax:
        (relational exp) ? (statement if true) : (statement if false);
    statement can be any expression
    if the relational expression is true then statement after '?' is executed and if the relational expression if false, then after ':' is executed 
    
    */

    int n;

    cout<<" Enter a number (not 0): ";
    cin>>n;

    cout<<" The number is "<<(n%2==0?"even":"odd") <<endl;

return 0;
}