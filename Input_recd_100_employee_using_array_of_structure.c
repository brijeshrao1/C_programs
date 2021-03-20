/*Program to input the 100 records of employee using array of structure*/
//ARRAY OF STRUCTURE:-group structure
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	struct
	{
		int e_id;
		char e_n[20];
		int e_age;
		float e_sal;
	} emp[100];
	int e_num,i;
	printf("Enter the number of employee of which you want to enter the records:\n");
	scanf("%d",&e_num);
	
	//
	for(i=0;i<e_num;i++)
    {
    //	fflush(stdin);//used for cleaning the file buffer
    	printf("Enter the ID,NAME,AGE and SALARY of %d employee:\n",i);
    	scanf("%d %s %d %f",&emp[i].e_id,&emp[i].e_n[i],&emp[i].e_age,&emp[i].e_sal);
	}
	
	//
	printf("printing the detail of employee\n");
	for(i=0;i<e_num;i++)
	{
		printf("check\n");
   	printf("The DETAIL of %d employee:id::::%d Name:%s Age:%d Salary:%f\n",i,emp[i].e_id,emp[i].e_n,emp[i].e_age,emp[i].e_sal);
    }
	
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
