/*Program to implement I/O function -> gets()*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  char arr[10];
  printf("Enter your name\n");
  gets(arr);//input string as input
  printf("Entered string is\n");
  puts(arr);//print the string
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
