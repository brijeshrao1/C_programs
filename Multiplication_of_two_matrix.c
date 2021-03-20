//Program for Addition of Two matrix
//LOGIC->r1=r2&c1=c2(ie the row of 1st matrix should equal to the column of 2nd matrix)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int arr1[10][10],arr2[10][10],mul[10][10],i,j,N_r1,N_c1,N_r2,N_c2;
	
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
	
	//printing the Entered matrix
	
	printf("The Entered matrix are\n\n1st Matrix:\n");
	    for(i=0;i<N_r2;i++)
	    {
		  for(j=0;j<N_c2;j++)
		    printf("%d ",arr1[i][j]);
		 printf("\n");
	    }
	printf("2nd Matrix: \n");
	    for(i=0;i<N_r1;i++)
    	{
		for(j=0;j<N_c1;j++)
		 printf("%d ",arr2[i][j]);
	     printf("\n");
	    } 
	    
	//finding the multiplication of two matrix
	    
	if(N_r1==N_c2)
	{
	   for(i=0;i<N_r2;i++)
	    {
		  for(j=0;j<N_c2;j++)
		  mul[i][j]=arr1[i][j]*arr2[i][j];
	    }
	    
	//printing the Multiplication of two matrix
	
	printf("The Multiplicatio of two matrix \n");
	    for(i=0;i<N_r1;i++)
    	{
		for(j=0;j<N_c1;j++)
		 printf("%d ",mul[i][j]);
	     printf("\n");
	    } 
    }
    else
    printf("Rows or Cols Are not Equal\n"); 
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
