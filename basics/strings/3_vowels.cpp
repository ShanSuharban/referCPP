#include<iostream>
using namespace std;
int main () {
		int i,c=0;
		char a[50];
		cout<<"Enter the string: "<<endl;
		cin>>a;
		
		for (i=0;a[i]!='\0';i++) {
				if (a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E'|| a[i]=='i'|| a[i]=='I'|| a[i]=='o'|| a[i]=='O'|| a[i]=='u'|| a[i]=='U')
							c++;
		}
		cout<<"The number of vowels in string, "<<a<<" : "<<c<<endl;
		
	
return 0;
}
