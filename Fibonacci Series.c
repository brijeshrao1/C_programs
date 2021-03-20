//program to print the fibonacci series upto n term
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  	int num,i=1,a=-1,b=1,c;
  	printf("Enter a number\n");
  	scanf("%d",&num);
  	while(i<=6)  
  	{
	  c=a+b;
	  printf("%d ",c);
  	  a=b;
	  b=c;
	  i++;
    }
getch();
return 0;
}
