#include<iostream>
using namespace std;
int main () {
	int n,i,flag=0,s;
	int *p=&n,*q=&s;
	cout<<"\nEnter the array limit: "<<endl;
	cin>>n;
	
	int a[n];
	int *r=a;
	
	cout<<"\nEnter array elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>*(r+i);
	}
	cout<<"\nEnter the element to be searched: "<<endl;
	cin>>s;
	
	for (i=0;i<*p;i++) {
		if (*(r+i)==*q) {
			cout<<"\nElement found in position "<<i+1<<endl;
			flag++;
			break;
		}
	}
	if (flag==0)
	   cout<<"\nElement "<<*q<<" not found in array"<<endl;
	
return 0;
}
