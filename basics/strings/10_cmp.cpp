#include<iostream>
#include<string>
using namespace std;
int main () {
	int i,l=0;
	char a[50],b[50];
	cout<<"Enter string1: "<<endl;
	gets(a);
	cout<<"Enter string2: "<<endl;
	gets(b);
	
	for (i=0;a[i]!='\0' && b[i]!='\0';i++) {
		if (a[i]!=b[i]) {
			l=a[i]-b[i];
			break;
		}
	}
	if (l>0)
	   cout<<"\nstring1 > string2 "<<endl;
    else if (l<0)
    	 cout<<"\nstring2 > string1"<<endl;
    else
    	cout<<"\nstring1 = string2"<<endl;
		
	
return 0;
}
