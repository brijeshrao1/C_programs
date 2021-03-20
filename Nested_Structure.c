/*Program to input the detail of the person using nested structure*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	//Defenition of  nested structure
   struct person
   {
   	char name[25];
   	int age;
   	struct dob
	{
   	    int date;
	    int month;
	    int year;	
	}db;
   }p;
   //
   printf("Enter the name of the detail Name,age,DOB-date,month and year\n");
   scanf("%s%d%d%d%d",&p.name,&p.age,&p.db.date,&p.db.month,&p.db.year);//Taking input in the nested structure
   
   //
   printf("The detail of the person\n");
   printf("Name: %s  Age: %d  DOB: %d-%d-%d",p.name,p.age,p.db.date,p.db.month,p.db.year); 
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
