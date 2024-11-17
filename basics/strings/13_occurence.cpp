#include<iostream>
#include<string>
using namespace std;
int main () {
	int i,count=0;
	char a[50],ch;
	cout<<"Enter the string: "<<endl;
	gets (a);
	
	cout<<"\nEnter the character to be searched: "<<endl;
	cin>>ch;
	
	for (i=0;a[i]!='\0';i++) {
		if (a[i]==ch)
		   count++;
	}
	cout<<"\nThe character "<<"'"<<ch<<"' occurs "<<count<<" times in: "<<"'" <<a<<"'"<<endl;

return 0;
}
