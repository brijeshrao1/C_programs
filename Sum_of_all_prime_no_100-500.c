/*Program to print the sum of prime number between 100-500*/
/*prime no->not more than two factor*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,sum=0;
	for(i=101;i<500;i++)
	{
		for(j=2;j<i;j++)
		{
		if(i%j==0)
		break;
	    }
	    if(j==i)
	   {
		printf("%d ",i);
	    sum+=i;
	    }
    }
     printf("\nSum of prime no=%d",sum);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
