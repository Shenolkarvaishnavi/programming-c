#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int No1 = 0 , No2 = 0 ,No3 = 0 , cnt = 0;
  printf("\n enter count for fiboncci series =");
  scanf("%d",&cnt);
  
  printf("\n fiboncci series of given count = ");
  
  for(No1=1;cnt>0;cnt--)
  {
    printf("\t%d",No3);
    No3 = No1+No2;
    No1 = No2;
    No2 = No3;
   }
  
  return 0;
}