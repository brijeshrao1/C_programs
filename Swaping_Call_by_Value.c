/*swaping using call by value*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int swap(int,int);
int main()
{
  int a=2,b=5;
  swap(a,b);//passing actual parameter
  printf("Value of Actual parameter\n");
  printf("a=%d and b=%d\n",a,b);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
int swap(int x,int y) //passing formal parameter
{
	x=x+y;
	y=x-y;
	x=x-y;
  printf("Value of formal parameter OR swap value\n");
  printf("a=%d and b=%d\n",x,y);
  return 0;
}
