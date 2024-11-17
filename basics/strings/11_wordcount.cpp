#include<iostream>
#include<string.h>
using namespace std;

int strcompare (char c[],char d[]) {
	int l=0,i;
	for (i=0;c[i]!='\0' && d[i]!='\0'; i++) {
		if (c[i]!=d[i]) {
			l=c[i]-d[i];
			break;
		}
	}
	return l;
}


int main () {
	int i,count=0;
	char a[50],b[]="exit";
	
		while(((strcompare(a,b)) !=0)) {
		  cout<<"\nEnter the string: "<<endl;
		  gets(a);
		  ++count;	
	} 
	count--;
	cout<<"\nWord count: "<<count<<endl;
	
return 0;
}
