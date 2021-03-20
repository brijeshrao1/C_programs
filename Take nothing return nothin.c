//Function Call without Parameter and No Return Value//
//Takes nothing Returns Nothing//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	system("cls");
	int fun();        //Declaration of function
	printf("Welcome back to C Progaming\n");
	fun();
	printf("Welcome back to main\n");
	getch();
	return 0;:
}
int fun()
{
	printf("you are in fun :-)\n");
}
