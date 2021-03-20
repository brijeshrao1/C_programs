/*Program to print the factorial of the number using recursion*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fact(int);
int main()
{
	int num,facto;
	printf("Enter the Number for which you want to calcuate the factorial\n");
	scanf("%d",&num);
	facto=fact(num);
	printf("Factorial of %d is=%d",num,facto);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
int fact(n)
{
	if(n==0||n==1)
	return 1;
	else
	return n*fact(n-1);
}
