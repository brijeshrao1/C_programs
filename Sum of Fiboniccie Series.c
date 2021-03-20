//program to print the Sum of fibonacci series upto n term
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  	int num,i=1,a=-1,b=1,c,sum=0;
  	printf("Enter a number\n");
  	scanf("%d",&num);
  	while(i<=6)  
  	{
	  c=a+b;
	  sum=sum+c;
  	  a=b;
	  b=c;
	  i++;
    }
     printf("The sum of ficbonicci series upto %dth number is %d ",num,sum);
getch();
return 0;
}
