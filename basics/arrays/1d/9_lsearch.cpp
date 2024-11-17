#include<iostream>
using namespace std;
int main () {
	int n,i,flag=0,s;
	cout<<"Enter the limit: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter the elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"\nEnter the element to be searched: "<<endl;
	cin>>s;
	for (i=0;i<n;i++) {
		if (a[i]==s) {
			cout<<"\nElement found in position "<<i+1<<endl;
			flag++;
			break;
		}
	}
	if (flag==0)
		cout<<"\nElement not found"<<endl;
	
return 0;
}
