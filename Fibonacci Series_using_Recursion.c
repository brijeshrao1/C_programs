/*Program name fibonacci series using recursion*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fibo(int);
int main()
{
    int num;
    printf("Enter the number upto which you want to print the fibonacci series\n");
    scanf("%d",&num);
    fibo(num);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
int fibo(int n)
{
	static a=-1,b=1,c=0;
     if(n>0)
	{
	c=a+b;
	printf("%d ",c);
	a=b;
	b=c;
    }
	fibo(n-1);
	return 0;
}
