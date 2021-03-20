/*Program to input element in the array and print the sum of elelments*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
float avg(int,int);
int main()
{
	int arr[100],i,num,sum=0;
	float av;
	printf("Enter the number of element you want to enter\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	scanf("%d",&arr[i]);
	sum+=arr[i];
    }
    for(i=0;i<num;i++)
    {
	printf("%d ",arr[i]);
    }
    av=avg(sum,num);
   
    printf("\nThe sum of elements in array is=%d",sum);
    printf("\nThe average of elements in array is=%d",av);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
float avg(int x,int y)
{
	float z;
    printf("\n%d & %d",x,y);
	z=(float)x/y;
    printf("\n%d",z);
	return z;
}
