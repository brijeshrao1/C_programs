/*Program to print the index of the smallest and largest nubmber*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int arr[10][10],i,j,N_r,N_c,smalle,large;
    static int a_1,b_1,a_2,b_2;
    printf("Enter the order of the matrix\n");
    scanf("%d%d",&N_r,&N_c);
    printf("Enter the Elements in the array\n");
    for(i=0;i<N_r;i++)
    {
    	for(j=0;j<N_c;j++)
    	{
    		scanf("%d",&arr[i][j]);
		}
	}
	smalle=arr[0][0];
	large=arr[0][0];
	//finding the largest and smallest no in the arr
	 for(i=0;i<N_r;i++)
    {
    	for(j=0;j<N_c;j++)
    	{
    		if(smalle>arr[i][j])
		    {
			   a_1=i;
	     	   b_1=j;
			   smalle=arr[i][j];
			   
            }
			else if(large<arr[i][j])
			{
				a_2=i;
			    b_2=j;
				large=arr[i][j];		
			   
			}
		}
	printf("Entered Elements in the array\n");
    for(i=0;i<N_r;i++)
    {
    	for(j=0;j<N_c;j++)
    	{
    		printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
		
	}
	//printing the value of the smallest and largest number
	printf("The smallest number is %d and the index of the number is arr[%d][%d]\n" ,smalle,a_1,b_1);
	printf("The largest number is %d and the index of the number is arr[%d][%d]",large,a_2,b_2);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
