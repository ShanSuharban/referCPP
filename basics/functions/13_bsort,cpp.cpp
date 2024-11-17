#include<iostream>
using namespace std;

void bsort(int x[], int y) {
	int i,j,t;
	for (i=0;i<y-1;i++) {
		for(j=0;j<y-1;j++) {
			if (x[j]>x[j+1]) {
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	cout<<"\nSorted array"<<endl;
	for (i=0;i<y;i++) {
		cout<<x[i]<<"\t";
	}
}

int main () {
	int n,i;
	cout<<"Enter the array size: "<<endl;
	cin>>n;
	
	int a[n];
	
	cout<<"Enter the elements: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"\nBefore sorting "<<endl;
	for (i=0;i<n;i++) {
		cout<<a[i]<<"\t";
	}
 	
 	bsort(a,n);
 	
return 0;
}


