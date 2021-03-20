/*Program to print the prime number between 100 to 1000*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 int i,j,count=0;
 for(i=101;i<1000;i++)
 {
 	int f=1;
 	for(j=2;j<i;j++)
 	{
	  if(i%j==0)
 	  {
	   f=0;
 	   break;
       }
	}
	if(f==1)
      {
	  printf("%d ",i);
	  count++;
	  }
}
	printf("\nTotal No. of prime No. b/w 100 to 1000=%d",count);   
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
