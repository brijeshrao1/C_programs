/*Program to check the number is ARMSTRONG*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int num,temp1,temp2,rem1,rem2,count,sum=0;
   printf("Enter any number\n");
   scanf("%d",&num);
   temp1=num;
   temp2=num;
   while(temp1!=0)
   {
   	count++;
   	rem1=temp1%10;
   	temp1=temp1/10;
   }
   while(temp2!=0)
   { 
    rem2=temp2%10;
   	temp2=temp2/10;
   sum=sum+pow(rem2,count);
   }
   if(num==sum)
   printf("Num is ARMSTRONG\n");
   else
   printf("Num is NOT Armstrong\n");
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
