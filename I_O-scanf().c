/*Program to implement I/O function -> scanf()*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

  char a[100],b[100],c[100];
  //scanf with 1 input
   printf("1st scanf() returns:%d\n",scanf("%s",a));// Will returns no. of input scaned
  //scanf with 2 input
   printf("2nd scanf() returns:%d\n",scanf("%s%s",a,b));
  //scanf with 3  input
   printf("3rd scanf() returns:%d\n",scanf("%s%s%s",a,b,c));
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
