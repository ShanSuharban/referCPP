#include<iostream>
using namespace std;

int fact (int x) {
	if (x==0)	// base condition part
	   return 1;
    else return (x*fact(x-1));	// recursive part or recursion
}

int main () {
	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	cout<<"\nFactorial of "<<n<<": "<<fact(n);
	
return 0;
}
