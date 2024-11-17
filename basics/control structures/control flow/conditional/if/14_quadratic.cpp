#include<iostream>
#include<cmath>
using namespace std;
int main () {
    float a,b,c,d,r1,r2,real,img;
    cout<<"Enter the value of a,b,c: ";
    cin>>a>>b>>c;

    d=((b*b)-4*a*c);

    if (d>0){
        r1=((-b+sqrt(d))/2*a);
        r2=((-b-sqrt(d))/2*a);
        cout<<"root1:"<<r1<<endl;
        cout<<"root2:"<<r2<<endl;
    }

    else if (d<0) {
        real=(-b/2*a);
        img=(sqrt(-d))/2*a;
        cout<<"root1:"<<real<<"+i"<<img<<endl;
        cout<<"root2:"<<real<<"-i"<<img<<endl;
    }

    else {
        r1=r2=(-b/2*a);
        cout<<"root1: "<<r1<<endl;
        cout<<"root2: "<<r2<<endl;
    }
    return 0;
}