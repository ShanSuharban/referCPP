#include<iostream>
using namespace std;
int main () {
		
		//	smaller to capital: a->A => A=a-32
		//	capital to smaller: A->a => A=a+32
		int i;
		char l[50];
		cout<<"Enter the string: "<<endl;
		cin>>l;
		for (i=0;l[i]!='\0';i++) {
			if (l[i]>='a' && l[i]<='z')
				l[i]=l[i]-32;		//uppercase conversion
	}
		cout<<"\nconverted string: "<<l<<endl;
		
		

	
return 0;
}
