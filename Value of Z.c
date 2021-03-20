/*Program to calculate the Value of y using if else lader*/
// if k==1 then z=x*x+y*y
// if k==2 then z=sqrt(x*x+y*y)
// if N==3 then z=sqrt(a*a+b*b)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   float z,a,b,x,y; 
   int K;
   printf("Enter the value of N->(1 to 4)\n");
   scanf("%d",&K);
   printf("Enter the value of a,b,x,y\n");
   scanf("%f%f%f%f",&a,&b,&x,&y);
   if(K==1)
   { 
     z=x*x+y*y;
     printf("The Value of the y is:%f",z);
   }
    else if(K==2)
   {
   	z=sqrt(x*x+y*y);
   printf("The Value of the y is:%f",z);
   }
    else if(K==3)
   {
    z=sqrt(a*a+b*b);
   	printf("The Value of the y is:%f",z);
   }
   else
   printf("Invalid input\n");
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
