#include<iostream>
using namespace std;

struct student {
	char name [20],dept[50];
	float m1,m2,m3,tm,avg;
	
	struct date {
		int day,month,year;
	}dob;
	
}stud;


int main () {
	cout<<"\nEnter the name: "<<endl;
	cin>>stud.name;
	cout<<"\nEnter the date of birth [dd mm yy]: "<<endl;
	cin>>stud.dob.day>>stud.dob.month>>stud.dob.year;
	cout<<"\nEnter the department: "<<endl;
	cin>>stud.dept;
	cout<<"\nEnter the marks: "<<endl;
	cin>>stud.m1>>stud.m2>>stud.m3;
	
	stud.tm=stud.m1+stud.m2+stud.m3;
	stud.avg=((stud.m1+stud.m2+stud.m3)/3);
	
	cout<<"\nName: "<<stud.name<<endl;
	cout<<"Department: "<<stud.dept<<endl;
	cout<<"Date of birth: "<<stud.dob.day<<"-"<<stud.dob.month<<"-"<<stud.dob.year<<endl;
	cout<<"Total marks: "<<stud.tm<<endl;
	cout<<"Average marks: "<<stud.avg<<endl;
	
return 0;
}
