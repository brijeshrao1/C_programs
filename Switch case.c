//Program to check the character is vowel or consonant
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{ 
  system("cls");
  char ch;
  printf("Enter the Alphabet i will tell you either it is vowel or consonant\n");
  scanf("%c",&ch);
  switch(ch)
  {
  	case 'a':
  	case 'e':
  	case 'i':
  	case 'o':
  	case 'u':
  	case 'A':
  	case 'E':
  	case 'I':
  	case 'O':
  	case 'U':
  	printf("Entered Alphabet is VOWEL\n");
  	break;
  	default:
  		printf("Entered Alphabet is CONSONANT");
  }
  getch();
  return 0;
}
