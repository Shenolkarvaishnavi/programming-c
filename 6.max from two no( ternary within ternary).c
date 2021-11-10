#include <stdio.h>
#include <conio.h>
int main()
{
  int num1=0,num2=0;
  printf("\n Enter two numbers=");
  scanf("%d%d",&num1,&num2);
  (num1 == num2) ? printf("\n both numbers are equal"):((num1>num2) ? printf("\n no%d is max",num1): printf("\n no %d is max",num2));
  printf("\nThanks");
  return 0;
}