/*Program name*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	struct hotel
	{
		char h_name[50];
		char r_type[15];
		int r_no;
		int h_price;
		char add[100];
	}h_room[100];
	
	int i,h_num;
	//
	printf("Enter the number of Hotel of which u want to enter the detail\n");
	scanf("%d",&h_num);
	
	//
	for(i=0;i<h_num;i++)
	{
		printf("Enter the detail of hotel room:Name,Type of room,Room no,Price and Address \n");
		scanf("%s %s %d %d %s",&h_room[i].h_name,&h_room[i].r_type,&h_room[i].r_no,&h_room[i].h_price,&h_room[i].add);
	}
    
    //
    printf("The detail of the hotel is\n");
    	for(i=0;i<h_num;i++)
	{
		printf("Hotel_Name:%s\nRoom_Type:%s\nRoom_no:%d\nPrice:%d\nAddress:%s",h_room[i].h_name,h_room[i].r_type,h_room[i].r_no,h_room[i].h_price,h_room[i].add);
	}
getch();  //used for pause the screen
return 0; //returning value to system on successfull execution of program
}
