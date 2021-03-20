/*Program to input the 2D matrix in the array
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int arr[10][10],i,j,N_r,N_c;
	printf("Enter the number of rows and columns\n");
	scanf("%d %d",&N_r,&N_c);
	for(i=0;i<N_r;i++)
	{
		for(j=0;j<N_c;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("The matrix Entered by user \n");
	for(i=0;i<N_r;i++)
	{
		for(j=0;j<N_c;j++)
		printf("%d ",arr[i][j]);
		printf("\n");
	}
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
