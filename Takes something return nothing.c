//Function Call with Parameter and No Return Value//
//Takes something Returns Nothing//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{  
    int a,b;
	int fun(int,int); //Declaration of function
	system("cls");
	printf("Enter the two parameter which you want to pass in in function\n");
	scanf("%d%d",&a,&b);
	fun(a,b);
	printf("Welcome back to main\n");
	getch();
	return 0;
}
int fun(int x, int y)
{ 
   int sum=0;
	printf("you are in fun :-)\n");
    sum=x+y;
    printf("Sum of Two numbers is %d\n",sum);
}
