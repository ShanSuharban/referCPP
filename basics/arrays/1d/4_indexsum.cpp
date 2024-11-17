#include<iostream>
using namespace std;
int main () {
	int i,n,evensum=0,oddsum=0;
	cout<<"Enter the array limit: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter the elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
		if (i%2==0)
		   evensum+=a[i];
        else
        	oddsum+=a[i];
	}
	cout<<"\nEven indexed elements Sum: "<<evensum<<endl;
	cout<<"Odd indexed elements Sum: "<<oddsum<<endl;
	
return 0;
}
