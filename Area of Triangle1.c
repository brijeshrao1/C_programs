//Program to write the area of the triangle
#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
 {
 	int a,b,c;
 	float area,s;
 	printf("Enter the sides of the triangle \n");
 	scanf("%d%d%d",&a,&b,&c);
 	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The parameter of the  Triangle=%f\n",s);
	printf("The Area of the triangle=%f\n",area);
    getch();
    return 0;
}
