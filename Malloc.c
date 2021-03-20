/*Program To imlement the dynamic memory allocation technique*/
//DYNAMIC MEMORY ALLOCATION:: Memory is allocated at the run time
//1-Malloc():
//2-Calloc()
//3-relloc()
//4-free()
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    // Malloc is used to allocate the single block of memory
    
    int *p;
    p=(int*) malloc(2);
    float *f;
    f=(float*) malloc(4);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
