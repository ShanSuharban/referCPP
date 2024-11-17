#include<iostream>
#include<string>
using namespace std;

struct student {
	char name[20];
	int age,rno;
	float m1,m2,m3,tm;
};

int main () {
	struct student s;
	cout<<"Enter the name of student: "<<endl;
	gets(s.name);
	cout<<"\nEnter the age and roll no: "<<endl;
	cin>>s.age>>s.rno;
	cout<<"\nEnter the mark1, mark2 and mark3 : "<<endl;
	cin>>s.m1>>s.m2>>s.m3;
	
	s.tm=s.m1+s.m2+s.m3;
	
	cout<<"\nName: "<<s.name<<endl;
	cout<<"Age: "<<s.age<<endl;
	cout<<"Roll no: "<<s.rno<<endl;
	cout<<"Total mark: "<<s.tm<<endl;
	
return 0;
}
