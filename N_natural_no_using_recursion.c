/*Program to print the n natural number using recursion*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int display_N(int n);
int main()
{ 
    int n;
	printf("Enter the number upto which you want to print the natural number\n");
	scanf("%d",&n);
	display_N(n);
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
int display_N(int x)
{
	static int num=1;
	if(x>0)
	{
	printf("%d ",num);
	num++;
	}
 display_N(x-1);
 return 0;
}
