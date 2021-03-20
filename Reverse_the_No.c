/* Program to print the entered number in reverse order*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
  int main()
  {
  	int arr[10],i,size;
  	printf("Enter the size of the element\n");
  	scanf("%d",&size);
  	printf("Enter the Elements in the array\n");
  	for(i=0;i<size;i++)
  	   scanf("%d",&arr[i]);
  	printf("Entered elements are\n");
  	for(i=0;i<size;i++)
  	 printf("%d ",arr[i]);
  	printf("Elements in Reverse order are\n");
  	for(i=size-1;i>=0;i--)
  	 printf("%d ",arr[i]);
getch();
return 0;
  }
