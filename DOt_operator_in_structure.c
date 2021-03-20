/*Program using dot(.) operator in the structure*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	//Creating New data type using structure
	//structure definition
    struct format
    {
    	char code[10];
    	char a_name[10];
    	int N_age;
    	float sal;
	}id;
	
	//Taking input in new data type
	printf("Enter the your ID in the format Code,Name,Age,Float:\n");
	scanf("%s %s %d %f",&id.code,&id.a_name,&id.N_age,&id.sal);
	
	//printing the taken input
	printf("%s %s %d %f",id.code,id.a_name,id.N_age,id.sal);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
