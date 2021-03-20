/*Program to print the name of the days*/
//Enum Data type:-the value of the firt member is zero(0) and other are one more than previous one(i++)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    
    enum day
    {SUN,MON,TUE,WED,THU,FRI,SAT};
    int d;
    for(d=SUN;d<=SAT;d++)
    {
    	if(d==1)
    	printf ("Monday\n");
    	else if(d==2)
    	printf("Tuesday\n");
    	else if(d==3)
    	printf("wednesday\n");
        else if(d==4)
    	printf("Thursday\n");
	    else if(d==5)
    	printf("Friday\n");
		else if(d==6)
    	printf("Saturday\n");
    	else
    	printf("d=0 Its a Sunday\n");
	}
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
