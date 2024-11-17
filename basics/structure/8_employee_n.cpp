#include<iostream>
using namespace std;

struct employee {
	char name[50],eid[30];
	float hra,da,bpay,pf,ts;
};

int main () {
	int n,i;
	cout<<"Enter the no: of employees: "<<endl;
	cin>>n;
	
	struct employee e[n];
	
	cout<<"\nEnter the details of the employees"<<endl;cout<<"----------------------------------"<<endl;
	for (i=0;i<n;i++) {
		cout<<"\nEnter the name of the employee "<<i+1<<": "<<endl;
		cin>>e[i].name;
		cout<<"\nEnter the employee id of the employee "<<i+1<<": "<<endl;
		cin>>e[i].eid;
		cout<<"\nEnter the hra,da,bpay,pf of the employee "<<i+1<<": "<<endl;
		cin>>e[i].hra>>e[i].da>>e[i].bpay>>e[i].pf;
		
		e[i].ts=(e[i].hra+e[i].bpay+e[i].da)-e[i].pf;
		
		cout<<"\n";
	}	
	
	for (i=0;i<n;i++) {
		cout<<"\nName of employee "<<i+1<<": "<<e[i].name<<endl;
		cout<<"Employee id of employee "<<i+1<<": "<<e[i].eid<<endl;
		cout<<"Total salary of employee "<<i+1<<": "<<e[i].ts<<endl;
		cout<<"\n\n";
	}
	
	
}


