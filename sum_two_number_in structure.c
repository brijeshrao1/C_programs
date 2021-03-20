/*Program to print the sum of two number using (.)in structure*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	struct sum
	{
	int num_1;
	int num_2;
	int sum;
	};
	struct sum id;
	//taking input of two numbers
	printf("Enter the two number: \n");
	scanf("%d %d",&id.num_1,&id.num_2);
	
	//calculating the sum
	 id.sum=id.num_1+id.num_2;
	 
	//printing the value of the sum
	printf("The sum of two number is:%d",id.sum);
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
