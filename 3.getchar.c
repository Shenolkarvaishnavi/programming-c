#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{ 
  char ch ='A';
  
  printf("\n value of character = %c.\n\n",ch);
  
  printf("\n enter new character value:");
  ch=getchar();
  
  printf("\n\n new value character =%c\n",ch);
  
  printf("\n Thanks for using our app.\n press any key to exit.");
  return 0;
}