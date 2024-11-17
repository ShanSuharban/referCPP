#include<iostream>
#include<string.h>
using namespace std;

void stringlen();
void stringcopy();
void stringcat();
void stringcmp();

int main () {
	int opt;
	while (true) {
		cout<<"\nThe string operations: "<<endl;
		cout<<"\n1. String Length "<<endl;
		cout<<"2. String Copy "<<endl;
		cout<<"3. String Concat "<<endl;
		cout<<"4. String Comapre "<<endl;
		cout<<"5. Exit "<<endl;
		cout<<"\nEnter your option: "<<endl;
		cin>>opt;
		
		switch (opt) {
			case 1: stringlen(); break;
			case 2: stringcopy(); break;
			case 3: stringcat(); break;
			case 4: stringcmp(); break;
			case 5: exit (0);		// exit from the program
			default: cout<<"Invalid option "<<endl;
		}
	}
return 0;
}

void stringlen() {
	int l=0,i;
	char a[50];
	cout<<"\nEnter the string: "<<endl;
	cin>>a;
	
	for (i=0;a[i]!='\0';i++) {
		l++;
	}
	cout<<"\nThe length of the string: "<<l<<endl;
	
}

void stringcopy () {
	int l=0,i;
	char a[50],b[50];
	cout<<"\nEnter the string 1: "<<endl;
	cin>>a;
	cout<<"\nEnter the string 2: "<<endl;
	cin>>b;
	
	for (i=0;b[i]!='\0';i++) {
		l++;
	}
	for (i=0;i<=l;i++) {
		a[i]=b[i];
	}
	cout<<"\nThe copied string: "<<a<<endl;
}

void stringcat () {
	int i,l=0;
	char a[50],b[50];
	cout<<"\nEnter the string 1: "<<endl;
	cin>>a;
	cout<<"Enter the string 2: "<<endl;
	cin>>b;
	
	for (i=0;a[i]!='\0';i++) {
		l++;
	}
	for (i=0;b[i]!='\0';i++) {
		a[l]=b[i];
		l++;
	}
	a[l]='\0';
	cout<<"\nAfter concatenation: "<<a<<endl;
	
}

void stringcmp () {
	int i,l=0;
	char a[50],b[50];
	cout<<"\nEnter the string 1: "<<endl;
	cin>>a;
	cout<<"\nEnter the string 2: "<<endl;
	cin>>b;
	
	for (i=0;a[i]!='\0';i++) {
		if (a[i]!=b[i]) {
			l=a[i]-b[i];
			break;
		}
	}
	if (l>0)
	   cout<<"\nString 1 > String 2 "<<endl;
    else if (l<0)
    	 cout<<"\nString 2 > String 1 "<<endl;
    else
    	cout<<"\n String 1 = String 2 "<<endl;

}


