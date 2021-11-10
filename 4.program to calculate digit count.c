#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{ int No = 0,dcnt = 0, Temp = 0;
  printf("enter positive integer no.to calculate its digit count :");
  scanf("%d",&No);
  
  Temp = No;
  
     if(No<0)
     {
        printf("Invalid input");
        return -1;
     }
     while(Temp>0)
     {
          dcnt++;
          
          Temp =Temp/10;
     }
     printf("\n count of digit in given no %d is =%d",No,dcnt);
  
  
  
  
  
  
  
  
  return 0;
}