#include<iostream>
using namespace std;

int sum (int x) {
	if (x==0)
	   return 0;
    else 
  	   return (x+sum(x-1));
}

int main () {
	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	cout<<"\nSum of "<<n<<" natural no: "<<sum(n)<<endl;
	
return 0;
}



