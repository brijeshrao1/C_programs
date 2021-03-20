/*Program to check the entered matrix is symmertric or not*/
//LOGIC->
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    	int arr1[10][10],arr2[10][10],i,j,N_r,N_c,f=1;
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
		for(i=0;i<N_r;i++)//Finding transpose of matric
	{
		for(j=0;j<N_c;j++)
		{
			arr2[i][j]=arr1[j][i]; //logic
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
	//checking symmetric or not
	for(i=0;i<N_r;i++)
	{
		for(j=0;j<N_c;j++)
		{
		if(arr2[i][j]!=arr1[i][j]&&f==1)
	 	  f=0;	
        }
    }
    if(f==1)
    printf("The matrix is symmetric\n");
    else
    printf("The matris is not symmetric\n");
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}  
