/*Program how to use Void pointer*/
//void pointer->it can point any data type(int,float,char and double)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int x=10;
    void *p=&x;
	printf("The address of the X is %u:\n",&x);
	printf("The address pointed by the pointer(*p) is: %u \nAnd the value stored at that address is: %d\n",p,(int*)p);
    
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
