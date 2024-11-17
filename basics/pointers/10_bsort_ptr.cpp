#include<iostream>
using namespace std;
int main () {
	int n,i,t,j;
	int *p=&n, *q=&t;
	
	cout<<"\nEnter the array limt: "<<endl;
	cin>>n;
	
	int a[n];
	int *r=a;
	
	cout<<"\nEnter the array elements: "<<endl;
	for (i=0;i<*p;i++) {
		cin>>*(r+i);
	}
	cout<<"\nBefore sorting "<<endl;
	for (i=0;i<n;i++) {
		cout<<*(r+i)<<"\t";
	}
	cout<<"\nAfter sorting "<<endl;
	for (i=0;i<n-1;i++) {
		for (j=0;j<n-1;j++) {     //   for (int j = 0; j < n - 1 - i; j++)
				if ((*(r+j))> (*(r+j+1))) {
					*q=*(r+j);
					*(r+j)=*(r+j+1);
					*(r+j+1)=*q;
				}
		}
	}
	for (i=0;i<*p;i++){
		cout<<*(r+i)<<"\t";
	}
	
return 0;
}
