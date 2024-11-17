#include<iostream>
using namespace std;
int main () {
	/*
	  	 	 structure -> collection of heterogeneous data 
	  	 	 ---------------------------------------------
	  	 	 
        syntax: struct struct_name {
        			   datatype1 variable 1;
        			   datatype2 variable 2;
        			   ...................
        			   datatypen variable n;
        		};
	  	 	 
	  	 	 	structure variable accessing using dot operator (.) and -> 
					-> is used for pointer variables like "struct *p1; "
        --------------------------------------------------------------
        eg:
	  	 	 
        struct name {
        	   int age,rno;
        	   char a[50];        	   
    	};
    	void main () {
    		struct name n1,n2;   -> each n1 and n2 datatype created using structure have all the variables created in the structure 
    		cout<<"enter name1 and name2: ";
    		cin>>n1.a>>n2.a;	-> data accessed using dot operator
    		cout<<"enter age of n1 and n2: ";
    		cin>>n1.age>>n2.age;
    	}
    		
						or 			
	   struct name {
	   		  int age ,rno;
	   		  char a[20];
	   } n1,n2;
	   	void main () {
	   		cout<<"enter name1 and name2: ";
    		cin>>n1.a>>n2.a;	-> data accessed using dot operator
    		cout<<"enter age of n1 and n2: ";
    		cin>>n1.age>>n2.age;
	   	
    	
    	}
	--------------------------------------------------------------
							structure within structures
							--------------------------
		METHOD 1:
			   	 struct date {
					int day,month,year;
	           };
	           struct student {
	           		  char name[20];
	           		  int rno;
	           		  float tm;
	           		  struct date dob;
 		    }stud;
	       
	structure within structure members are accessed using : stud.dob.year, stud.dob.month, stud.dob.day
	
        METHOD 2:
        
  		    struct student {
  		    	   char name [20];
  		    	   int m1,m2,m3,tm;
  		    	   
  		    	   struct date{
			   		  int day,month,year;
  		    }dob;  
  		    
  			}stud;
  			
	structure within structure members are accessed using : stud.dob.year, stud.dob.month, stud.dob.day
	-----------------------------------------------------------------
	*/
	
return 0;
}

