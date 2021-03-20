/*Program to find the factorial of the number*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
  int main()
  {
  	int num,i,fact=1;
  	printf("Enter the number\n");
  	scanf("%d",&num);
  	for(i=1;i<=num;i++)
	  fact=fact*i;
	printf("The factorial of the number %d is %d",num,fact);
	getch();
	return 0;
  }
