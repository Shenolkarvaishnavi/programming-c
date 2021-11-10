#include <stdio.h>
#include <conio.h>
int main()
{
  char ch ='A';
  printf("\n\n value of our character is=%c.\n\n________ Hello Indian_______\n\n",ch);
  
  printf("\n Are you Indian???(Yes/No)=");
  
  ch = getchar();
  
  if(ch=='Y'|| ch == 'Y')
  {
      printf("\n\n ____Welcome dear____\n\n");
  }
  else
  {
      printf("\n\n___ bye bye___\n\n");
  }
}