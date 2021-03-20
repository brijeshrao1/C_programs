/*Program To use basic syntax of the POINTER*/
/*int type pointer   :: point integer type variable address
  float type pointer :: point float type variable address
  char type pointer  :: point char type variable address
  double type pointer:: point double type variable address*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *i,i_1;//Declaring int type pointer variable
	float *f,f_1;//Declaring float type pointer variable
	char *c,c_1;//Declaring int char pointer variable
	double *d,d_1;//Declaring int double pointer variable
	
	//Assigning the address of the the variable to the pointer variable
	i=&i_1;
    f=&f_1;
	c=&c_1;
	d=&d_1;
	    
	//Printing the Value/address contained in the pointer variable (v_name) || address of(&)
	printf("Address of i_1= %u\n",&i_1);
	printf("Address of i= %u\n",&i);
	printf("Address Contained in pointer variable(i)= %u\n",i);
	
	//
	printf("Address of f_1= %u\n",&f_1);
	printf("Address of f= %u\n",&f);
	printf("Address Contained in pointer variable(f)= %u\n",f);
	
	//
	printf("Address of c_1= %u\n",&c_1);
	printf("Address of c= %u\n",&c);
	printf("Address Contained in pointer variable(c)= %u\n",c);
	
	//
	printf("Address of d_1= %u\n",&d_1);
	printf("Address of d= %u\n",&d);
	printf("Address Contained in pointer variable(d)= %u\n\n",d);
	
	//
    i_1=11;
    f_1=22;
    c_1=33;
    d_1=544434343434;
    
    //Printing the value at the addres contained in pointer variable(*v_name)
	printf("Value of i_1:%d\n",i_1);
	printf("Value at the address (%u) contained is pointer variable i=%d\n",i,*i);
    
    //
    printf("Value of f_1:%f\n",f_1);
	printf("Value at the address (%u) contained is pointer variable i=%f\n",f,*f);
	
	//
	printf("Value of c_1:%d\n",c_1);
	printf("Value at the address (%u) contained is pointer variable i=%d\n",c,*c);
	
	//
	printf("Value of d_1:%u\n",d_1);
	printf("Value at the address (%u) contained is pointer variable i=%d\n\n",d,*d);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
