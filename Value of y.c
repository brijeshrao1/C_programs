/*Program to calculate the Value of y using if else lader*/
// if N==1 then y=ax^2
// if N==2 then y=4ax^2+b^2
// if N==3 then y=sqrt(ax^2+b)
// if N==4 then y=(ax+b)^2
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   float y,a,b,x; 
   int N;
   printf("Enter the value of N->(1 to 4)\n");
   scanf("%d",&N);
   printf("Enter the value of a,b,x\n");
   scanf("%f%f%f",&a,&b,&x);
   if(N==1)
   { 
     y=a*x*x;
     printf("The Value of the y is:%f",y);
   }
    else if(N==2)
   {
   	y=4*a*x*x+b*b;
   printf("The Value of the y is:%f",y);
   }
    else if(N==3)
   {
   	y=sqrt(a*x*x+b);
   	printf("The Value of the y is:%f",y);
   }
    else if(N==4)
   {
   	y=(a*x+b);
   	printf("The Value of the y is:%f",y);
   }
   else
   printf("Invalid input\n");
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
