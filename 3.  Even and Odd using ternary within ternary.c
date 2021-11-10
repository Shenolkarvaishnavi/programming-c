#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int num =0;
  printf("\n Enter an integer number =");
  scanf("%d",&num);
  
  (num==0)?printf("\n Given no is neutral."):((num%2==0))?printf("\n Given no is Even."):printf("\n Given no is Odd");
  
  printf("\n Thanks");
  
  return 0;
}