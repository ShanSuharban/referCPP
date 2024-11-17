#include<iostream>
#include<string>
using namespace std;

struct student {
	char name[50];
	int age,rno;
	float m1,m2,m3,tm;
};

int main () {
	int n,i;
	cout<<"\nEnter the no: of students: "<<endl;
	cin>>n;
	
	struct student s[n];  // structure of n students created using array
	
	cout<<"\nEnter the details of the students "<<endl;
	for (i=0;i<n;i++) {
		cout<<"\nEnter the name of student "<<i+1<<": "<<endl;
		cin>>s[i].name;
		cout<<"\nEnter the age and roll no: of student "<<i+1<<": "<<endl;
		cin>>s[i].age>>s[i].rno;
		cout<<"\nEnter the marks of student "<<i+1<<": "<<endl;
		cin>>s[i].m1>>s[i].m2>>s[i].m3;
		
		s[i].tm=s[i].m1+s[i].m2+s[i].m3;
		cout<<"\n";
	}
	
	for (i=0;i<n;i++) {
		cout<<"\nName of student "<<i+1<<": "<<s[i].name<<endl;
		cout<<"Age of student "<<i+1<<": "<<s[i].age<<endl;
		cout<<"Roll no: of student "<<i+1<<": "<<s[i].rno<<endl;
		cout<<"Total marks of student "<<i+1<<": "<<s[i].tm<<endl;
		cout<<"\n\n";
	}
	
return 0;
}


