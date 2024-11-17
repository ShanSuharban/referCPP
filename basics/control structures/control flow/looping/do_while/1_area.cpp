#include<iostream>
using namespace std;
int main () {
	float l,b,a; char ch;
	do {
		cout<<"\nEnter the length and breadth of the rectangle: "<<endl;
		cin>>l>>b;
		a=l*b;
		cout<<"Area: "<<a<<endl;
		
		cout<<"\nAny more Rectangle [Y/N]: "<<endl;
		cin>>ch;
		
	} while (ch=='y' || ch=='Y');
			
	
	
return 0;
}
