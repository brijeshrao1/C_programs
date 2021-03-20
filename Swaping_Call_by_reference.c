/*swaping using call by reference*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int swap(int*,int*);// pointer type variable will be passed
int main()
{
  int a=2,b=5;
  printf("Value of Actual parameter\n");
  printf("a=%d and b=%d\n",a,b);
  swap(&a,&b);//passing refference variable
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
int swap(int *x,int *y) // declaring ponter variable
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
  printf("Value of formal parameter OR swap value\n");
  printf("a=%d and b=%d\n",*x,*y);
  return 0;
}
