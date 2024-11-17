#include<iostream>
using namespace std;

	/*		function in function
			The function that called in a function should be defined above the calling function  
	
	*/

int fact (int x ) {		//called function
	if (x==0)
	   return 1;
    else
    	return (x*fact(x-1));
}

void print_fact (int n ) {			//calling function
	int i;
	for (i=1;i<=n;i++) {
		cout<<"\nFactorial of "<<i<<": "<<fact(i)<<endl;		
	}
}

int main () {
	int n;
	cout<<"\nEnter the number: "<<endl;
	cin>>n;
	
	print_fact(n);
	

	
return 0;
}
