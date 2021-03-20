/*Program find the sum of 50 integer number using pointer*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int arr[100],i,num,sum=0;
	printf("Enter the number of elements which you want to enter\n");
	scanf("%d",&num);
	printf("Enter the numbers in the 1D array\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&*(arr+i));
		sum=sum+*(arr+i);
	}
	
	//
	printf("sum of number=%d",sum);
	
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
