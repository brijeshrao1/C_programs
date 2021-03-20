//Program to print the sum of all elements in the 2D array
#include<stdio.h>
#include<conio.h>
#inclue<stdlib.h>
int main()
{
	int arr[10][10],i,j,sum=0,N_r,N_c;
	printf("Enter the order of the matrix\n");
	scanf("%d%d",&N_r,&N_c);
	
	//Now taking input into the array 
	printf("Enter the elements in the array\n");
	for(i=0;i<N_r;i++)
	{
		for(j=0;j<N_c;j++)
		scanf("%d"&arr[i][j]);
	}
	
	//Now calulating the sum of elements int the array
	for(i=0;i<N_r;i++)
	{
		for(j=0;j<N_c;j++)
		sum+=arr[i][j];
	}
	printf("The sum of elements int Matrix is:%d",sum);
getch();
return 0;
}
