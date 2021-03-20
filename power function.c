// Calculating the power 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{ 
 int num,val,p;
 printf("Enter the number and power\n");
 scanf("%d%d",&num,&p);
 val=pow(num,p);
 printf("Value=%d",val);
 getch();
 return 0;
}
