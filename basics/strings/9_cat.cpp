#include<iostream>
#include<string>
using namespace std;
int main () {
	int i,l1=0,l2=0;
	char a[50],b[50];
	cout<<"Enter the string1: "<<endl;
	gets(a);
	cout<<"Enter the string2: "<<endl;
	gets(b);
	
	for (i=0;a[i]!='\0';i++) {
		l1++;
	}
	for (i=0;b[i]!='\0';i++) {
		l2++;
	}
	for (i=0;i<=l2;i++) {
		a[l1+i]=b[i];
	}
	cout<<"\nConcatenated string: "<<a<<endl;
	
return 0;
}
