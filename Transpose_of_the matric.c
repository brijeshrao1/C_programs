/*Program Transpose of the matrix*/
//LOGIC->
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    	int arr1[10][10],arr2[10][10],i,j,N_r,N_c;
	printf("Enter the number of rows and columns of matrix 1\n");
	scanf("%d %d",&N_r,&N_c);
	
	printf("Enter the element in the matrix1\n");
	
	for(i=0;i<N_r;i++)
	{
		for(j=0;j<N_c;j++)
		scanf("%d",&arr1[i][j]);
	}
	printf("Entered Matrix is\n");
	for(i=0;i<N_r;i++)
	{
		for(j=0;j<N_c;j++)
		{
	    printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
    
	printf("The transpose of the matrix\n");
	
	for(i=0;i<N_r;i++)
	{
		for(j=0;j<N_c;j++)
		{
			arr2[i][j]=arr1[j][i];
		}
	} 
	for(i=0;i<N_r;i++)
	{
		for(j=0;j<N_c;j++)
		{
	    printf("%d ",arr2[i][j]);
		}
    printf("\n");	
	}  
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}  
