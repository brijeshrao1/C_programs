#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	for(i=0;i<=5;i++)
	{
		if(i==2||i==4)
		  continue;
	printf("%d ",i);
	}
getch();
return 0;
}
