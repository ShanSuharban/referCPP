#include<iostream>
#include<string.h>
using namespace std;

struct student {
	char name[20],id[20];
	float percentage;
};

void func(struct student stud); // here the student structure inside the function with stud variable  recieves the structure variable s

int main () {
	struct student s;
	int i;
	for (i=0;i<3;i++) {
		s.id[i]=i+'1';
	}
	s.id[3]='\0';
	strcpy(s.name,"name");
	s.percentage=80.656;
	func(s);
	
return 0;
}

void func (struct student stud) {
	cout<<"\nId: "<<stud.id<<endl;
	cout<<"\nName: "<<stud.name<<endl;
	cout<<"\nPercentage: "<<stud.percentage<<endl;
}
