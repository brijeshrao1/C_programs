/*Program how to use th NULL pointer */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int x=10;
	int *p;
	p=&x;
	printf("The value of x is %d",*p);
	
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
