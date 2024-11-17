#include<iostream>
using namespace std;

struct time {
	int hr,min,sec;
};

int main () {
	
	struct time t1,t2,t3;
	cout<<"Enter the hour, minute, second of time 1: "<<endl;
	cin>>t1.hr>>t1.min>>t1.sec;
	cout<<"\nEnter the hour, minute and second of time 2: "<<endl;
	cin>>t2.hr>>t2.min>>t2.sec;
	
	t3.hr=t1.hr+t2.hr;
	t3.min=t1.min+t2.min;
	t3.sec=t1.sec+t2.sec;
	
	if (t3.sec>=60) {
		t3.sec-=60;
		t3.min++;
	}
	if (t3.min>=60) {
		t3.min-=60;
		t3.hr++;
	}	
	if (t3.hr>=24) {
		t3.hr-=24;
	}
	cout<<"\n"<<t3.hr<<":"<<t3.min<<":"<<t3.sec<<endl;
	
return 0;
}

