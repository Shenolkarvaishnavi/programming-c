#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{ int No = 0 ,Dig = 0, dsum = 0 , Temp = 0;
  printf("enter positive no. to calculate its digit sum:");
  scanf("%d",&No);
  
  if(No<0)
  {
       Temp = - No;
     
  }
  else
  {
    Temp = No;
  }
   for(;Temp>0;Temp/=10)
  {
     Dig = Temp%10;
     printf("\n %d + %d = %d ",dsum,Dig,(dsum+Dig));
     dsum += Dig;
  } 
  printf("\n sum of digit in given no %d is = %d",No,dsum);
  
  return 0;
}