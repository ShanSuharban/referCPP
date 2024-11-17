#include<iostream>
using namespace std;

void lsearch (int x[], int y, int z) {
	int i,flag=0;
	for (i=0;i<y;i++) {
		if (x[i]==z) {
			cout<<"\nElement found in position "<<i+1<<endl;
			flag++;
			break;
		}
	}
	if (flag==0)
	   cout<<"\nElement not found "<<endl;
}

int main () {
	int n,i,p;
	cout<<"Enter the array size: "<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"Enter the array elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"\nEnter the element to be searched: "<<endl;
	cin>>p;
	
	lsearch (a,n,p);
	
}


