 /*Program to find the factorial of the number using function*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{ int catch;
	int num, fact();
	printf("Lets Calculate the factorial\n");
	printf("Enter the number\n");
    scanf("%d",&num);
	catch=fact(num);
	printf("The Factorial of Entered number is %d",catch);
getch();
return 0;
}
int fact(int x)
{
  int i,fact=1;
  for(i=1;i<=x;i++)
     fact=fact*i;
  return fact;
}



