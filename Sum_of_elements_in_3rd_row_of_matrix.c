/*Program to read the matrix and Calculate fallowing
1-Sum of element of 3rd Row of the matrix
2-Sum of all element of the matrix
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int arr[10][10],i,j,sum=0,N_r1,N_c1;
	printf("Enter the number of rows and columns of matrix min(3x3)\n");
	scanf("%d %d",&N_r1,&N_c1);
	
	//Taking input in the array
	printf("Enter elements in the array\n");
	for(i=0;i<N_r1;i++)
	{
		for(j=0;j<N_c1;j++)
		scanf("%d",&arr[i][j]);
	}
    
	//printing the elements in the array
	printf("The enterd array is\n");
		for(i=0;i<N_r1;i++)
	{
		for(j=0;j<N_c1;j++)
		printf("%d  ",arr[i][j]);
	printf("\n");
	}
    
	// Calculating the sum of number in 3rd row
	for(i=0;i<N_r1;i++)
	{
		if(i==2)// execute the next loop if row=3 ie third row
		{
		for(j=0;j<N_c1;j++)	
	    sum+=arr[i][j];
	   }
    }
    //printing the sum of elements in the 3rd row
    printf("Sum of elements in the 3rd row is=%d",sum);
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
