//Program to Check Even or Odd Number without using loop
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i;
	printf("Enter the number which you want check\n");
	scanf("%d",&num);
	if(num==1)
	printf("The number %d is odd\n",num);
	else if(num==2)
	printf("The Number %d is Even\n",num);
	else 
	printf("Enter the valid Choice\n");
	getch();
	return 0;
}
