/*Program to find the smallest and largest number in arry*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int arr[10][10],i,j,N_r,N_c,smalle,large;
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
			smalle=arr[i][j];
            else if(large<arr[i][j])
			large=arr[i][j];		
		}
		
	}
	//printing the value of the smallest and largest number
	printf("The smallest number is %d\n" ,smalle);
	printf("The largest number is %d ",large);
	getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
