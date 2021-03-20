/*Program to implement I/O function -> getch()*/
// it takes character as input but donot display on the console//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
  char ch;    //declaring the char type variable to store/display the character recieved by getch 
  printf("please enter the character\n");
  ch=getch(); //takes character as input store in char type variable ch
  printf("character recived by getch is:%c",ch);
getch();  //used for pause the screen
return 0;//returning value to system on successfull execution of program
}
