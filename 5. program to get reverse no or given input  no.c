#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int No = 0,Temp = 0, Reverse = 0;
  printf("enter positive integer to get its reverse no :");
  scanf("%d",&No);
  
  Temp = No;
  
  if(No<0)
  {
       printf("Invalid input");return -1;
  }
  while(Temp>0)
  {
     Reverse = (Reverse  * 10)+(Temp%10);
     Temp /= 10;
  }
  printf("\n reverse of given no %d is =%d",No, Reverse );
  return 0;
}