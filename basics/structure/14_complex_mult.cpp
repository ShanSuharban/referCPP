#include<iostream>
using namespace std;

struct complex {
	int real,img;
};

int main () {
	struct complex c1,c2,c3;
	cout<<"Enter the real and imaginary of complex 1: "<<endl;
	cin>>c1.real>>c1.img;
	cout<<"\nEnter the real and imaginary of complex 2: "<<endl;
	cin>>c2.real>>c2.img;
	
	//complex multiplication -> (a+ib)*(c+id)=> (ac-bd)+i(ad+bc)
	c3.real=((c1.real*c2.real)-(c1.img*c2.img));
	c3.img=((c1.real*c2.img)+(c1.img*c2.real));
	
	cout<<"\nComplex number 1: "<<c1.real<<"+i"<<c1.img<<endl;
	cout<<"Complex number 2: "<<c2.real<<"+i"<<c2.img<<endl;
	cout<<"Complex number 3(c1*c2): "<<c3.real<<"+i"<<c3.img<<endl;
	
return 0;
}


