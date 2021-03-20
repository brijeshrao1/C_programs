/*Program to find the Smallest no in the array*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
  int main()
  { 
     system("cls");
  	 int min,i,j,arr[100],size;
  	 printf("Enter the size of the array\n");
  	 scanf("%d",&size);
  	 printf("Enter the elements in the array\n");
  	 fflush(stdin);
  	 for(i=0;i<size;i++)
  	{
  			scanf("%d",&arr[i]);
	}
	min=arr[0];
		 for(i=0;i<size;i++)
  	{
  			if(min>arr[i])
  			min=arr[i];
	}
	printf("The Smallest number in the array is %d",min);
	getch();
	return 0;
  }
