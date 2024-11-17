#include<iostream>
using namespace std;

int fib (int x) {
	if (x==0 || x==1) 
	   return x;
    else
    	return (fib(x-1)+fib(x-2));
}

int main () {
	int n,i,res;
	cout<<"\nEnter the no: of series: "<<endl;
	cin>>n;
	
	
	for (i=0;i<n;i++) {
		res=fib(i);
		cout<<res<<"\t";
	}
return 0;
}
