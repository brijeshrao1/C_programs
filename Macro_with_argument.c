//PREPROCESSOR DIRECTIVES START

/*Program to implement Macro with Argument*/
#define SQUARE(n) n*n
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	//Find the square of the number
    int n;
	int s;
	printf("Enter the number of which you want to SQUARE\n");
	scanf("%d",&n);
	s=SQUARE(n);
    printf("The Square of the Number is %d ",s);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
