/*Program To Check wether the number is prime or not*/
//number is natural number ie(num>1)
//PRIME=num is  divisible by self   only or by 1;
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{  
    int num,i,f=1;
	printf("Enter the number which you want to check whether it is prime or not\n");
	scanf("%d",&num);// Value will be store in num variable
    for(i=2;i<=num-1;i++)
	 if(num%i==0)
	    break;
	if(i==num)
	printf("%d is Prime number\n",num);
	else
	printf("%d is Not a Prime number\n",num);
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
