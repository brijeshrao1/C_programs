//function call without parameter and renturn value
// Takes nothing and Retun some thing
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//for using system()
int main()
{ 
   system("cls");// clearing the screen
  int z;
  int add();
  printf("Welcome to the main\n");
  printf("hey! call the add function for calculation of sum\n");
  z=add(); // calling the sum function
  printf("%d\n",z);
  printf("Good job done by add()-^\n");
}
int add()// function defination
{ 
  int x,y,sum=0;
  printf("Welcome to the sum function\n");
  printf("Enter the two numbers and I will tell you the sum of that numbers\n");
  scanf("%d%d",&x,&y);
  sum=x+y;
  return sum;
}
