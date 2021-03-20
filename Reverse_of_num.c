/*Program to print the reverse of number*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{   
    int num,temp,r,rev=0;
    printf("Enter any number\n");
    scanf("%d",&num);
    temp=num;
	while(temp!=0)
    {
    	r=temp%10;
    	rev=rev*10+r;
    	temp=temp/10;
	}
	printf("Reverse of %d is:%d",num,rev);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
