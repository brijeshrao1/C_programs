/*Area  of the Right angled triangle*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	system("cls");
	int bs,ht;
	float area;
	printf("Enter height and base of the Right angled  triangle\n");
	scanf("%d%d",&bs,&ht);
    area=(bs*ht)/2;
    prinf("The area of Right angled triangle is %f",area)
getch();
return 0
}
