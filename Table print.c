// Program to print the table
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{ 
 system("cls");
 int tab,num,i,upto;
 printf("Enter the number for which you want to print the table\n");
 scanf("%d",&num);
 printf("Enter the number upto which you want to print the table\n");
 scanf("%d",&upto);
 for(i=1;i<=upto;i++)
 {
   tab=num*i;
   printf("%dx%d=%d\n",num,i,tab);
 }
 getch();
 return 0;
 }
