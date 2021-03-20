/*Program to implement the double pointer */
//DOUBLE POINTER:pointer of pointer(ie. 1 pointer contain the address of another pointer)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int *p,**q,x=10;
    p=&x;//assigning the address of x
    q=&p;//assigning the address of pointer variable to another pointer
    printf("Address of X is=%u\n",&x);
    printf("value at the Address of X is=%u",x);
    printf("Address of p is=%u\n",&p);
    printf("Address of X contained in p is=%u\n",p);
    printf("Address of p contained in q is=%u\n",q);
    printf("Address of q is= %u\n",&q);
    printf("Value at the Address contained in p= %d\n",*p);
    printf("Value at the Address contained in q= %d\n",**q);
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
