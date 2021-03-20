/*Program intializing the union variable*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	//
union person
	{
		int id;
		char name[20];
	};
	union person p1={253,"brijeshrao"},*s;
	
	printf("Person ID: %d  Person Name: %s\n",p1.id,p1.name);
	
	//Now printing intialize value of union
	s=&p1;
	printf("Person Name using ->: %s\n",s->name);// S is pointing to the address of P
    printf("Person Name using (*): %s",*(p1).name);//
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
