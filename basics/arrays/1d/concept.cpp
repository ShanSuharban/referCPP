#include<iostream>
using namespace std;
int main () {
	/* 
			array decalaration & initialisation
			-----------------------------------
			
			syntax: data_type arra_name[size];
			initialisation:			int a[10];
						 
			nth address of array = BASE ADDRESS + (n-1)*size of data type
			if base address = 1020 and size of data type is integer, then
			6th address of array -> 1020 + (6-1) * 2 -> 1030 
			
			declaration: int a[] = {10,20,30,40};
						 int a[10] = {1,2,3,4,5,6,7,8,9};
						 int a[0] = 1;
						 	 a[1] = 2;
						 	 a[2] = 3;
						 	 ........
						 	 ........
	        -----------------------------------------
			int a[10]= {1,2,3,4 };
			cout<<a;  -> shows base address of the array = address of the first element of the array
			
			array traversing
			----------------
			for (i=0;i<n;i++ ) {
			cout<<a[i]<<endl;
		}
			
	*/
return 0;
}

