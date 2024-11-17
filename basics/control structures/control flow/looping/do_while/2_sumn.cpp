#include<iostream>
using namespace std;
int main () {
	int sum,n,i; char ch;
	do {
	sum=0;
	cout<<"\nEnter the number: "<<endl;
	cin>>n;
	i=1;
	do {
		sum=sum+i;
		i++;
	} while (i<=n);
	
	cout<<"sum of "<<n<<" natural no: "<<sum<<endl;
	cout<<"\nDo you want to continue [Y/N]: "<<endl;
	cin>>ch;
	
} while (ch=='y' || ch=='Y');

return 0;	
}
