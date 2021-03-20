/*Program to find the factorial of the number using function*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{ int catch;
	int fact();
	printf("Lets Calculate the factorial\n");
	catch=fact();
	printf("The Factorial of Entered number is %d",catch);
getch();
return 0;
}
int fact()
{
  int num,i,fact=1;
  printf("Enter the number\n");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
     fact=fact*i;
  return fact;
}



