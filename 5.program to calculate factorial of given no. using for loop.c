#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//Compiler version gcc  6.3.0

int main()
{
  int No = 0,fact = 0,Temp = 0;
  printf("\n enter no.to calculate its factorial =");
  scanf("%d",&No);

  
  for(fact=1,Temp=No;Temp>0;Temp--)
  {
    fact *= Temp ;
  
  } 
  printf("\n factorial of no %d is = %d",No,fact);
  
  printf("\n\n Thanks");
  return 0;
}