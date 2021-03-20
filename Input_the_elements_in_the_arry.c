/*Program to input the numbers in list or array and display them*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int arr[100],num,i;
    printf("Enter the no of element you want to enter\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    	scanf("%d",&arr[i]);
    printf("The number Entered by the user are\n");
    for(i=0;i<num;i++)
    	printf("%d ",arr[i]);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
