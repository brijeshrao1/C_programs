/*Program to find the average of the number using array*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int main()
 {
 	int arr[10],i,size,sum=0;
 	float avg;
 	printf("Enter the size of the array\n");
 	scanf("%d",&size);
	printf("Enter the element in the arr\n");
	for(i=0;i<size;i++)
	   scanf("%d",&arr[i]);
	for(i=0;i<size;i++)
	   sum=sum+arr[i];
	printf("The sum of Element in the array is %d",sum);
	avg=sum/size;
	printf("The average of the number is %f",avg);
getch();
return 0;

 }
