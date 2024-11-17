#include<iostream>
using namespace std;

int digsum(int x) 
{
	int d,s=0;
	while (x!=0) {
		d=x%10;
		s=s+d;
		x=x/10;
	}
	return s;
}

int main () {
	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	cout<<"\nThe sum of digits of "<<n<<": "<<digsum(n)<<endl;
	
}

