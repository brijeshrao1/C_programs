/*Program To intialize the structure variable*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	//Creatiing structure
	struct book
	{
		char book_n[30];
		int book_id;
		char book_au[30];
		float book_p;
	};
	struct book b1={"let us C",2020,"yashvant",250},b2={"C",1999,"Balguru",210};
	
	//
	//printing the detail of the book
    printf("Name of Book1: %s  \nBook ID: %d  \nName of Author: %s  \nBook price: %f\n\n",b1.book_n,b1.book_id,b1.book_au,b1.book_p);
    printf("Name of Book2: %s  \nBook ID: %d  \nName of Author: %s  \nBook price: %f",b2.book_n,b2.book_id,b2.book_au,b2.book_p);

getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
