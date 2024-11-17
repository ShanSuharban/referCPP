#include<iostream>
using namespace std;

struct stud {
	   char a[20];
	   int rno,marks[5],tm;	
}s;

int main () {
	int i;
	s.tm=0;
	cout<<"\nEnter the name: "<<endl;
	cin>>s.a;
	cout<<"\nEnter the roll number: "<<endl;
	cin>>s.rno;
	cout<<"\nEnter the marks of 3 subjects: "<<endl;
	for (i=0;i<3;i++) {
		cin>>s.marks[i];
		s.tm=s.tm+s.marks[i];
	}
	cout<<"\nRoll number: "<<s.rno<<endl;
	cout<<"Marks are : "<<endl;
	for (i=0;i<3;i++) {
		cout<<s.marks[i]<<"\t";
	}
	cout<<"\nName: "<<s.a<<" and total mark is "<<s.tm<<endl;
	
	
return 0;
}
