#include<iostream>
#include<string>
using namespace std;
int main () {
	int i,l=0;
	char a[50],b[50];
	cout<<"Enter the string1: "<<endl;
	gets(a);
	cout<<"Enter the string2: "<<endl;
	gets(b);
	
	for (i=0;b[i]!='\0';i++) {
		l++;
	}
	for (i=0;i<=l;i++) {
		a[i]=b[i];
	}
	cout<<"\nCopied string: "<<a<<endl;
	
return 0;
}
