#include<iostream>
#include<string>
using namespace std;
int main () {
		int i,l=0,j;
		char a[50],t;
		cout<<"Enter the string: "<<endl;
		gets(a);
		
		for (i=0;a[i]!='\0';i++){
			l++;
		}
		
		for (i=0,j=l-1;i<j;i++,j--) {
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		cout<<"\nReverse string: "<<a<<endl;
		
return 0;
}
