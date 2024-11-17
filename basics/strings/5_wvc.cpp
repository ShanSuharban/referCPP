#include<iostream>
#include<string>
using namespace std;
int main () {
	
	int i,c1=0,c2=0,c3=0;
	char a[100];
	cout<<"Enter the line of text: "<<endl;
	gets(a);		//gets is used to get line of text
	
	for (i=0;a[i]!='\0';i++) {
		if (a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='0' || a[i]=='u' || a[i]=='U')
										c1++;
		else if (a[i]==' ')
			c2++;
		else
			c3++;
	}
	cout<<"\nNo: of vowels: "<<c1<<endl;
	cout<<"No: of words: "<<c2+1<<endl;	// no: of words= no: of spaces +1
	cout<<"No: of consonants: "<<c3<<endl;
	
return 0;
}
