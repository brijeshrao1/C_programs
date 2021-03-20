 /*Program to print the print the prime number upto n*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{ 
int i,j,num;
printf("Enter the number upto which you want to print the prime number\n");
scanf("%d",&num);
for(i=2;i<num;i++)
{
	for(j=2;j<i;j++)
	{
		if(i%j==0)
			break;
	}
	if(j==i)
		{
		 printf("%d ",i);
	    }
}
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
