#include<iostream>
#include<string.h>
using namespace std;
int main () {
	int i,n,j;
	cout<<"Enter the array limit: "<<endl;
	cin>>n;
	
	char a[100][n];
	char t[100];
	
	cout<<"Enter the array names: "<<endl;
	for (i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<"\nsorted array: "<<endl;
	for (i=0;i<n-1;i++) {
		for (j=i+1;j<n;j++) {
			if (strcmp(a[i],a[j]) > 0) {
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
		}
	}
	for (i=0;i<n;i++) {
		cout<<a[i]<<endl;
	}
	
	/* also name sort
	----------------------- 
	 	for (i=0;i<n;i++) {
			for (j=i;j<n;j++) {
				if (strcmp(a[i],a[j]) > 0) {
				   strcpy(t,a[i]);
				   strcpy(a[i],a[j]);
				   strcpy(a[j],t);
			    }
		    }
	   }
	
	
	*/
	
	
return 0;
}
