#include<iostream>
#include<string.h>
using namespace std;

struct student {
	char name[20],id[20];
	float percentage;
};

void func(struct student *stud); // here stud is a pointer variable of structure student and it refers the address of the structure variable of s, the two structure variables are different

int main () {
	struct student s;
	int i;
	for (i=0;i<3;i++) {
		s.id[i]=i+'1';
	}
	s.id[3]='\0';
	strcpy(s.name,"name");
	s.percentage=80.656;
	func(&s);	//  here the address of the s variable is passed to the function.
	
return 0;
}
// here -> is used to acess the structure variable of student s
void func (struct student *stud) {
	cout<<"\nId: "<<stud->id<<endl;
	cout<<"\nName: "<<stud->name<<endl;
	cout<<"\nPercentage: "<<stud->percentage<<endl;
}
