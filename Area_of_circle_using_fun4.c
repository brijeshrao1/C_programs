/*Program to calculate the area of the triangle*/

//fun1->Call Without Parameter and No Return Value
//fun2->Call Without Parameter and With Return Value
//fun3->Call With Parameter and No Return Value
//fun4->Call With Parameter and With Return Value

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	float fun(float);
	float catch,r;
	printf("Lets Calculate the area of the Circle\n");
	printf("Enter the radius of the circle\n");
	scanf("%f",&r);
	catch=fun(r);
	printf("The area of the Circle is %f",catch);
getch();
return 0;
}
float fun(float x)
{
	float area;
	area=(3.14*x*x);
return area;
}
