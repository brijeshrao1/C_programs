/*Program to input the detail of student and display all*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	struct student
	{
		int R_no;
		char Nm[20];
		char f_nm[20];
		int age;
		char Cors[20];
		char add[100];
	}stu;
	
	int i,S_num;
	
	//
	printf("Enter the Number of student of which you want to enter detail:\n");
	scanf("%d",&S_num);
	
	//
		for(i=0;i<S_num;i++)
    {
    //	fflush(stdin);//used for cleaning the file buffer
    	printf("Enter the Roll no,Name,Father name,Age,Course and address of student:\n");
    	scanf("%d %s %s %d %s %s",&stu.R_no,&stu.Nm[i],&stu.f_nm[i],&stu.age,&stu.Cors[i],&stu.add[i]);
	}
    
    //
		for(i=0;i<S_num;i++)
    {
    	printf("\n\nEntered detail of the student:\n");
    	printf("\nRoll No:%d Name:%s F_Name:%s Age:%d Course:%s Address:%s",stu.R_no,stu.Nm,stu.f_nm,&stu.age,stu.Cors,stu.add);
	}
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
