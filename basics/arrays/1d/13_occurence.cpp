#include<iostream>
using namespace std;
int main () {
	int n,i,s,c=0;
	cout<<"Enter the array limit: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"\nEnter the elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"\nElements "<<endl;
	for (i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
	cout<<"\nEnter element to be searched: "<<endl;
	cin>>s;
	
	for (i=0;i<n;i++) {
		if (a[i]==s)
		   c++;
    }
	cout<<"\nThe number "<<s<<" occurs "<<c<<" times "<<endl;

return 0;
}
