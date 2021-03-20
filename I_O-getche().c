/*Program to implement I/O function -> getche()*/
//used to input the character and displace witout pressing Enter key
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

   char ch;
   printf("Enter the character\n");
   ch=getche();
   printf("Character recieved by the getchar is:%c",ch);
getch();  //used for pause the screen
return 0;//returning value to system on successfull execution of program
}
