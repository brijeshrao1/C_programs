/*Program To implement the Memory allocation technique*/
//1-Static Memory Allocation->allocated at compile time
//2-Dynamic Memory Allocation->allocate at run time
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	//static memory allocation
	int x;//2 byte memory is allocated
	char Ch;//1 byte memory is allocated
	float f;//4 byte memory is allocated
	double d;//8 byte memory is allocated
	printf("Memory allocated to int Variable is %d Byte\n",sizeof(x));
    printf("Memory allocated to char Variable is %d Byte\n",sizeof(Ch));
	printf("Memory allocated to float Variable is %d Byte\n",sizeof(f));
	printf("Memory allocated to double Variable is %d Byte\n",sizeof(d));

getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
