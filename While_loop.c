/*Program to print the simple series*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,s=0;
	while(i<=6)
	{
		s=s+i;
		i=i+1;
	}
	printf("%d ",s);
getch();
return 0;
}
