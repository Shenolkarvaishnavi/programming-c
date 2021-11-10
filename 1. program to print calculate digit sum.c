#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{ int No = 0 ,Dig = 0, dsum = 0 , Temp = 0;
  printf("enter positive no. to calculate its digit sum:");
  scanf("%d",&No);
  
  if(No<0)
  {
     printf("Invalid number"); return -1;
     
  }
  Temp = No;
  
  while(Temp>0)
  {
     Dig = Temp%10;
     dsum = dsum+Dig;
     Temp = Temp/10;
  } 
  printf("\n sum of digit in given no %d is = %d",No,dsum);
  
  return 0;
}