/*Program to imlement the pointer operation */
//POINTER operation:
//1-Pointer++ or Pointer--
//2-Comparision of two Pointer(>,<,<=,>=,==,!=)
//3-Adding and Subracting a pointer with integer
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int x=10,y=20,z=30;
    int *arr[]={&x,&y,&z};
    
    //Printing the addres simple way
    printf("Address of x is %u\n",&x);
    printf("Address of y is %u\n",&y);
    printf("Address of x is %u\n\n\n",&z);
    
    //Printing the address using array of pointer
    printf("Address of x is %u\n",arr[0]);
    printf("Address of y is %u\n",arr[1]);
    printf("Address of x is %u\n",arr[2]);
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
