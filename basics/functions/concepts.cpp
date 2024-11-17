#include<iostream>
using namespace std;
int main () {
	
	/*		functions
			----------
	
	   int add (int x, int y)       -> int x, int y ->  formal arguments 
	   {
	   // function body
	   	int z;
	   	z=x+y;
	   }
	   void main () {
	   		int c;
	   		c=add(a,b);   -> function call -> call by value function
	   }
	
	   function declaration: int add (intx, int y);  -> used when write function after main function to inform about the upcoming function to the compiler 
	   
	*/
	   			
	-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	   			
	/*		recursive function
 			------------------
    factorial eg:	n!=n*(n-1)!
	sum of n no: 	sum(n)=n+sum(n-1)
	sum of digits:	digsum(153)=3+digsum(15)
							   =3+5+digsum(1)
							   =3+5+1+digsum(0) -> return ((x%10)+digsum(x/10))
	--------------------------------------------
	
			  			int fact (int x) {
			  				if (x==0)					//base condition part
							  return 1;
							else
								return x*fact(x-1);		//recursive part    
				        }
						void main () {
							 a=fact(n); 	
			            }
			  
	
	*/
	   			
	 ---------------------------------------------------------------------------------------------------------------------------------------------------------  			
	
	/*		function in array
			------------------
				
 			int add (int x[], int y)   -> here 'x' refers to 'a' in function call in the main function
			s=add(a,n);		-> here a is the array in the main function and here the base address of the array will be  passed to the function , n is the limit of the array 
	
	*/
	
	---------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	/*		pointer in function / call by reference
			----------------------------------------
			void swap (int *x, int *y)  -> here *x and *y are the pointer variables to store address of the variable a and b in main function 
			{
			 int z=*x;
			 *x=*y;
			 *y=z;
			}
			void main () {
			swap (&a,&b)  	-> here the address of the variable a and b are passed to the function swap. 
		    }
	
	
	*/
	
	
return 0;
}
