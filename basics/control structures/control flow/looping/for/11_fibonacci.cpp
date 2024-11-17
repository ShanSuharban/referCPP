#include<iostream>
using namespace std;
int main () {
        int f=0,s=1,t,n,i;
        cout<<"Enter the number of fibonacci series: ";
        cin>>n;

        cout<<"fibonacci series: \n"<<endl;
        for (i=1;i<=n;i++ ) { // also for (i=0;i<n:i++) .Here i starts with 1 because we only need n numbers, not more or less.
        
        //      cout<<f; --> also get the same result
                t=f+s;
                cout<<f<<"\t";
                f=s;
                s=t;
        }

    return 0;
}