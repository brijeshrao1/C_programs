/*Structure of the program*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//we are going to use the exit() function
int main()
{
  int s;
  printf("Enter any number between 1-10\n");
  scanf("%d",&s);
  while(s)
  {
  	if(s<0)
  	{
	printf("program is going to terminate\n");
  	exit(0);
    }
  printf("Enter any number between 1-10\n");
  scanf("%d",&s);
   }
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
