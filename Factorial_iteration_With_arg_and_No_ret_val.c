/*Program to find the factorial of the number using function with arg and no return value*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{ int catch;
	int fact(int);
	int num;
    printf("Enter the number\n");
    scanf("%d",&num);
	printf("Lets Calculate the factorial\n");
    fact(num);
getch();
return 0;
}
int fact(int x)
{ 
    int i,fact=1;
    for(i=1;i<=x;i++)
    fact=fact*i;
    printf("The Factorial of Entered number is %d",fact);
return 0;
}



