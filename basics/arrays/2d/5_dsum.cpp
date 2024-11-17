 #include<iostream>
 using namespace std;
 int main () {
 	int m,n,i,j,dsum=0;
 	cout<<"Enter the row and col size: "<<endl;
 	cin>>m>>n;
 	int a[m][n];
 	cout<<"Enter the matrix elements: "<<endl;
 	for (i=0;i<m;i++) {
 		for (j=0;j<n;j++) {
 			cin>>a[i][j];
 			if (i==j) 
			 	dsum=dsum+a[i][j];
		 }
	 }
	 cout<<"\nMatrix: ";
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
 	cout<<"\nDiagonal Sum: "<<dsum<<endl;
 	   
 return 0;
 }
