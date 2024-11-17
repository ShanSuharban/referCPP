#include<iostream>
using namespace std;
int main () {
	int i,c=0;
	char a[50];
	cout<<"Enter the string: "<<endl;
	cin>>a;
	
	for (i=0;a[i]!='\0';i++) {
		if (a[i]=='a')
			c++;
	}
	cout<<"The no: of 'a' in the string: "<<c<<endl;
	
	
return 0;
}
