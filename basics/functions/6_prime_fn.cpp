#include<iostream>
using namespace std;

int prime (int x) {
	int i,flag=0;
	for (i=2;i<=x/2;i++) {
		if (x%i==0) {
			flag=1;
			return flag;
		}
	}
	return flag;
}

int main () {
	int n,flag;
	cout<<"\nEnter the no: "<<endl;
	cin>>n;
	
	flag=prime(n);
	
	if (flag==0)
	   cout<<"\n"<<n<<" is a prime number "<<endl;
    else
    	cout<<"\n"<<n<<" is not a prime number "<<endl;
	
return 0;
}
