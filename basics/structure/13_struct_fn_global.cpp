#include<iostream>
#include<string.h>
using namespace std;

struct student {
	char name[20],id[20];
	float percentage;
};

	struct student s;  // here structure student created as a global variable, so we can access it from anywhere using the same variable 

void structure();

int main () {

	int i;
	for (i=0;i<3;i++) {
		s.id[i]=i+'1';
	}
	s.id[3]='\0';
//  strcpy(s.id,"nameid");	
	strcpy(s.name,"name");
	s.percentage=80.656;
	structure ();
	
return 0;
}

void structure () {
	// here the structure variable accessed using same as in the name function.
	cout<<"\nId: "<<s.id<<endl;
	cout<<"\nName: "<<s.name<<endl;
	cout<<"\nPercentage: "<<s.percentage<<endl;
}
