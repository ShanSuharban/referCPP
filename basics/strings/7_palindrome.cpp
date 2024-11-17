#include<iostream>
using namespace std;
int main () {
	int i,l=0,flag=0,j;
	char a[50],t;
	cout<<"Enter the string: "<<endl;
	cin>>a;
	
	for (i=0;a[i]!='\0';i++) {
		l++;
	}
	for (i=0,j=l-1;i<j;i++,j--) {
		if (a[i]!=a[j]) {
			cout<<"\nString "<<a<<", is not palindrome"<<endl;
			flag++;
			break;
		}
	}
	if (flag==0)
	   cout<<"\nString "<<a<<", is palindrome"<<endl;
	
return 0;
}
