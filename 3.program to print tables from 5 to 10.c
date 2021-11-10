#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int RN = 0, CN = 0;
  printf("\n tables from 5 to 9 as follows = \n\n");
  
  for(RN=1;RN<=10;RN++)
  {
     for(CN=5;CN<=9;CN++)
     {
      printf("\n %3d * %3d = %3d ",RN,CN,(CN*RN));
      }
  }
  
  printf("\n Thanks");
 
  return 0;
}