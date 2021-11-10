#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//Compiler version gcc  6.3.0

int main()
{
  int No = 0,fact = 1,Temp = 0;
  printf("\n enter no.to calculate its factorial =");
  scanf("%d",&No);
  
  Temp = No ;
  
  while(Temp>1)
  {
    fact = fact * Temp ;
    Temp--;
  } 
  printf("\n factorial of no %d is = %d",No,fact);
  
  printf("\n\n Thanks");
  return 0;
}