/*Program Smallest and largest number*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int arr[100],smalle,large,num,i;
    printf("Enter the number of elements want to enter\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    scanf("%d",&arr[i]);
    
    smalle=arr[0];
    large=arr[0];
    for(i=0;i<num;i++)
	{
	if(smalle>arr[i])
      smalle=arr[i];
    if(large<arr[i])
        large=arr[i];
    }
     printf("The smallest number in the array is %d\n",smalle); 
     printf("The largest number in the array is %d",large);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
