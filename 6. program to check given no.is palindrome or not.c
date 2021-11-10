#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{ int No = 0, Temp = 0, RevNum = 0;
  printf("enter positive integer number to check whether it is palindrome number :");
  scanf("%d",&No);
  
  
  Temp = No;
  
  if(No<0)
  {
     printf("Invalid input");return -1;
  }
  while (Temp>0)
  {
      RevNum =(RevNum * 10)+(Temp % 10);
      Temp /= 10;
  }
  if(No == RevNum)
  {
    printf("\n As %d = %d",No,RevNum);
    printf("\n given No %d is palindrome.",No);
  } else
  {
    printf("\n As %d ! = %d",No,RevNum);
    printf("\n given no %d is not palindrome",No);
  }
  return 0;
}