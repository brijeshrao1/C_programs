//Program to find the greatest among the no.
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("Enter the three no.X,Y&Z\n");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z)
    
    	printf("%d is greatest among them\n",x);
	else if(y>x&&y>z)
    	printf("%d is greatest among them\n",y);
	else
		printf("%d is greatest among them\n",z);
getch();
return 0;
}
