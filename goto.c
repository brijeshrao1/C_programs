#include<stdio.h>
#include<conio.h>
int main()
{
	int i=10;
    loop://label
    	printf("%d ",i);
    	i=i-1;
    if(i>=1)
    goto loop;
getch();
return 0;
}
