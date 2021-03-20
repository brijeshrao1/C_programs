/*Program to Conditional Compilation*/
//#if,#endif,#else,#ifdef,#ifndef,#elseif 
#define MARKS 60
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	//Check the grade 
    #if MARKS>80
    printf("Garade A\n");
    #elseif MARKS>=60
    printf("Garde B\n");
    #else
    printf("Grade C\n");
    #endif
	
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
