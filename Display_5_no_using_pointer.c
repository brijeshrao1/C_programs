/*Program to input 5 integer and display them using pointer*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int x[10],i;
    printf("Enter 5 number:\n");
    for(i=0;i<5;i++)
    {
    	scanf("%d",&*(x+i));
	}
	printf("Entered numbers are\n");
	   for(i=0;i<5;i++)
    {
    	printf("%d ",*(x+i));
	}
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
