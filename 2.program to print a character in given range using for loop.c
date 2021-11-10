#include <stdio.h>
#include <conio.h>
# include <stdlib.h>
//Compiler version gcc  6.3.0

int main()
{
  char Sch='\0' ,Ech='\0';
  printf("\n enter starting character=");
  Sch= getche();
  
  printf("\n enter ending character=");
  Ech= getche();
  
  for(;Sch<=Ech;Sch++)
  {
      printf("\n%c",Sch);
  }
  printf("\n Thanks");
  return 0;
}