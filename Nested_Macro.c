/*Program to implement NEsted Macro*/
#define SQUARE(n) n*n
#define CUBE(n) n*SQUARE(n) 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	//Find the CUBE of the number
    int n;
	int s;
	printf("Enter the number of which you want to SQUARE\n");
	scanf("%d",&n);
	s=CUBE(n);
    printf("The Square of the Number is %d ",s);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
