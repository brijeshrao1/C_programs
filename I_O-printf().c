/*Program to implement I/O function -> printf()*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

   char arr[]="brijesh_rao";
   printf("while printing\n");
   printf("\nThe Value returned by printf() is:%d",printf("%s",arr));// Will print the total no. of characerts on console
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
