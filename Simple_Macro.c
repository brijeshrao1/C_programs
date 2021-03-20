/*Program to implement the simple macro*/
#define Pi 3.14
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	//Find the area of the circle
    float Ar,rad;
    printf("Eneter the Radius of the circle\n");
    scanf("%f",&rad);
    Ar=Pi*(rad*rad);
    printf("Area of the Circle = %f\n",Ar);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
