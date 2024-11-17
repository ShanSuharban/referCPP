#include<iostream>
using namespace std;

int reverse (long int x) {
	long int rem,rev=0;
	
	while (x>0) {
		rem=x%10;
		rev=((rev*10)+rem);
		x=x/10;
	}
	return rev;
}

int main () {
	long int n,rev;
	cout<<"\nEnter the no: "<<endl;
	cin>>n;
	
	rev=reverse(n);
	cout<<"Reverse of "<<n<<": "<<rev<<endl;
	
return 0;
}
