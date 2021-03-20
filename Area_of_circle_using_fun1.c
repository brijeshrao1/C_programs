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
	int fun();
	printf("Lets Calculate the area of the Circle\n");
	fun();
getch();
return 0;
}
int fun()
{
	float area,r;
	printf("Enter the radius of the circle\n");
	scanf("%f",&r);
	area=(3.14*r*r);
	printf("The area of the Circle is %f",area);
return 0;
}
