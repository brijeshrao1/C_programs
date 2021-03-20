/*Program using STATIC keyword*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

  int fun();  //fun declaration
  printf("1st Call\n");
  fun();      // fun call
  printf("2nd Call\n");
  fun();
getch();  //input character before termination of program
return 0; //returning value to system on successfull execution of program
}
int fun()
{
	static int x,y=2; // Data will be stored in main memory
	printf("The initial Value of x is %d\n",x);//printing initial value is ZERO
	printf("The initialized Value of y is %d\n",y);//printing the intialized value of y
	y=y+1;
return 0;
}
