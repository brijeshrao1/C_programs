/*Program to find the Greates no int the array*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
  int main()
  { 
     system("cls");
  	 int max,i,j,arr[100][100],r,c;
  	 printf("Enter the row and column of the array\n");
  	 scanf("%d%d",&r,&c);
  	 printf("Enter the elements in the array\n");
  	 fflush(stdin);
  	 for(i=0;i<r;i++)
  	{
  		for(j=0;j<c;j++)
  		{
  			scanf("%d",&arr[i][j]);
		}
	}
	max=arr[0][0];
		 for(i=0;i<r;i++)
  	{
  		for(j=0;j<c;j++)
  		{
  			if(max<arr[i][j])
  			max=arr[i][j];
		}
	}
	printf("The Gretest number in the array is %d",max);
	getch();
	return 0;
  }
