/*Program to add the two number using section operator(*) in structure */
//or We can say that Relation between SECTION and DOT operator
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	struct add
	{
		int a;
		int b;
		int z;
	} x,*p;
	  p=&x;
	//
	printf("Enter the two number i will tel you sum\n");
	scanf("%d %d",&x.a,&x.b);
	
	//calculating sum
	(*p).z=(*p).a+(*p).b;
	
	//printing the sum of two number
	printf("The sum of two number is:%d",(*p).z);
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
