//Program for Subtraction of Two matrix
//LOGIC->r1=r2&c1=c2
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int arr1[10][10],arr2[10][10],sub[10][10],i,j,N_r1,N_c1,N_r2,N_c2;
	printf("Enter the number of rows and columns of matrix 1\n");
	scanf("%d %d",&N_r1,&N_c1);
	printf("Enter the number of rows and columns of matrix 2\n");
	scanf("%d %d",&N_r2,&N_c2);
	
	printf("Enter the element in the matrix1\n");
	for(i=0;i<N_r1;i++)
	{
		for(j=0;j<N_c1;j++)
		scanf("%d",&arr1[i][j]);
	}
	
	printf("Enter the Elements in matrix2\n");
	for(i=0;i<N_r2;i++)
	{
		for(j=0;j<N_c2;j++)
		scanf("%d",&arr2[i][j]);
	}
	
	if(N_r1==N_r2&&N_c1==N_c2)
	{
	   for(i=0;i<N_r2;i++)
	    {
		  for(j=0;j<N_c2;j++)
		  sub[i][j]=arr1[i][j]-arr2[i][j];
	    }
	    printf("The subtraction of two matrix \n");
	    for(i=0;i<N_r1;i++)
    	{
		for(j=0;j<N_c1;j++)
		 printf("%d ",sub[i][j]);
	     printf("\n");
	    } 
    }
    else
    printf("Rows or Cols Are not Equal\n"); 
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
