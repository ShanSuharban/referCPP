#include<iostream>
using namespace std;
int main () {
		int l=0,i;
		char a[50];
		cout<<"Enter the string: "<<endl;
		cin>>a;
		
		for (i=0;a[i]!='\0';i++) {
			l++;
		}
		cout<<"The length of the string, "<<a<<": "<<l<<endl;
			
return 0;
}
