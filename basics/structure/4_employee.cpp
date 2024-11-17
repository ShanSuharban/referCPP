#include<iostream>
#include<string>
using namespace std;

struct employee {
	char name[20],eid[20];
	float hra,da,pf,bpay,ts;
};

int main () {
	struct employee e;
	cout<<"Enter employee name: "<<endl;
	gets (e.name);
	cout<<"\nEnter the employee id: "<<endl;
	gets (e.eid);
	cout<<"\nEnter the hra, da, pf, bpay: "<<endl;
	cin>>e.hra>>e.da>>e.pf>>e.bpay;
	
	e.ts=(e.hra+e.da+e.bpay)-e.pf;
	
	cout<<"\nEmployee Name: "<<e.name<<endl;
	cout<<"Employee id: "<<e.eid<<endl;
	cout<<"Total Salary: "<<e.ts<<endl;
n	
return 0;
}

