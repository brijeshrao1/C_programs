/*Program to find the sum of the digit of num*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int num,sum=0,temp;
    printf("Enter any number\n");
    scanf("%d",&num);
    while(num!=0)
    {
    	temp=num%10;
    	num=num/10;
    	sum=sum+temp;
	}
   printf("The sum of digit of number is:%d",sum);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
