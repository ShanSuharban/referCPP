#include<iostream>
using namespace std;

int digsum(int x) {
	if (x==0)
	   return x;
    else
    	return ((x%10)+digsum(x/10));
}

int main () {
	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	cout<<"\NSum of digits of "<<n<<": "<<digsum(n)<<endl;
}


