/*Program to find the factorial of the number using function*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int fact();
	printf("Lets Calculate the factorial\n");
	fact();
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
    printf("The Factorial of %d is %d",num,fact);
  return 0;
}



