/*Program to change the name of existing data type using TYPEDEF*/
//TYPEDEF:- It is used to chage the name of existing datatype
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	typedef float f;//changing the name of the float data type to f
    f avg=25;
    printf("avg=%f",avg);
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
