//Program to print the size of char int float double in 32 bit  os
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{ 
 system("cls");
 /*char a;
 int b;
 float c;
 double d;*/
printf("size of the char is %d\n",sizeof(char));
printf("size of the integer is %d\n",sizeof(int));
printf("size of the float is %d\n",sizeof(float));
printf("size of the double is %d\n",sizeof(double));
getch();
return 0;
}
