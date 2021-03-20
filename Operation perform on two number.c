/* Using the operator * + - / %*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char ch;
	float x,y,c;
	printf("Enter the two numbers\n");
	scanf("%f%f",&x,&y);
	system("cls");
	printf("Now Enter the operation Which you want to perform\n");
	fflush(stdin);
	scanf("%c",&ch);
	printf("You Enter Choice is %c\n",ch);
    switch(ch)
	{
		case '+':
			c=x+y;
			printf("%f+%f=%f",x,y,c);
			break;
		case '-':
			c=x-y;
			printf("%f-%f=%f",x,y,c);
			break;
		case '*':
			c=x/y;
			printf("%f/%f=%f",x,y,c);
			break;
		default:
		     printf("Please Enter the Valid Operator\n");
			 break;	
	}
	getch();
	return 0;
}
