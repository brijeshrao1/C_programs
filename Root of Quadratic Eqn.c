//Program to find the root of given equation
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float x,a,b,c,R1,R2;
	printf("Enter the coefficient of x^2,x and constant to find the root of given quadratic Equation\n");
	scanf("%f%f%f",&a,&b,&c);
	R1=((-b)+(sqrt(b*b-4*a*c)))/(2*a);
    R2=((-b)-(sqrt(b*b-4*a*c)))/(2*a);
    printf("The root of given quadratic equation are %f & %f",R1,R2);
    getch();
    return 0;
}
