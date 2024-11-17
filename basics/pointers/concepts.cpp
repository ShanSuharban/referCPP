#include<iostream>
using namespace std;
int main () {

/*									pointer
									-------
    pointer -> a variable used to store the memory address of another variable
            -> mainly used to dynamically allocate and deallocate memory, especially when we need to handle unlimited amounts of data
			-> used to manipulate the address and can access the data of any variable			  

    declaration: int *ptr; ( where * denotes it as pointer variable )
	initialisation:	ptr=&a; (where & is the address of operator, so it stores the memory address of the variable a) 
                  : int *p=&a;
                  
        pointer operators -> & -> referencing operator -> denotes the address of the content -> count <<&a; -> print the address
        				  	 * -> deferencing operaotor -> denotes the content of the address -> cout<<*ptr; -> prints the content of the variable a .
    
    
			integer pointer -> points integer variable -> int *i;
			character pointer -> points character variable -> char *c
			floating pointer -> points floating variables -> float *f
			void pointer -> points to any type of variable -> void *p;

---------------------------------------------------------------------------------------------------------------------------------------

                                                 pointer arithematics
                                                 --------------------
                            eg:     int a[5] = {1,2,3,4,5};
								    int *p=a; or int *p=&a[0];
								    
							     int : size of data_type = 2 bytes
								 char: size of data_type = 1 bytes
								 float: size of data_type = 4 bytes
									                 
        address + integer -> address : address + constant =>  address +(size of data_type) * constant : *(p+1) => *(1020+1) -> *(1022)-> a[1]
        address - integer -> address : address - integer => address - (size of data_type) * constant
        address++ => address
        address-- => address
        
        address-address=number
        
        illegal operations: address+address, address*address, address/address, address%address
        
----------------------------------------------------------------------------------------------------------------------------------------------
                                                pointer to array
                                                ----------------
        array is a constant pointer to the first element of an array
        eg:  int array[50];
        	 array is a pointer to &array[0]
        	 
      	 so there are different methods for array element accessing using pointer 
 		  	        int a[10]={1,2,3,4,5,6,7,8,9,10};
 		  	        int *p=a;
      method1:	 	for (i=0;i<n;i++) {
      					cout<<(*p+i)<<"\t";
       				}
       				
      method2: 		for (i=0;i<n;i++) {
      					cout<<*(a+i)<<"\t";
	  			   }
	  			   
	  			   
        &array[1] = (array+1)  ,  array[1] = *(array+1)
        &array[2] = (array+2)  ,  array[2] = *(array+2)
        &array[3] = (array+3)  ,  array[3] = *(array+3)
        
general: &array[i] = (array+i)  , array[i] = *(array+i)


---------------------------------------------------------------------------------------------------------------------------------------------------
												pointer to matrix 
												------------------
									array => 	a[i] -> *(p+i)
									matrix => 	a[i][j] -> *(*(p+i)+j)
																																											   																																		   
-------------------------------------------------------------------------------------------------------------------------------------------------------
*/


	
return 0;
}
