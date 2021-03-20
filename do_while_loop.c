/*program to print the series using do while loop*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1;
	do{
		printf("%d ",i);
        i=i+3;
	}while(i<=13);
	getch();
	return 0;
}
