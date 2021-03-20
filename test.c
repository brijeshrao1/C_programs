/*Program name*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   char name[100];
   printf("Enter your name\n");
   scanf("%s",&name);
   printf("Entered name is %s",name);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
