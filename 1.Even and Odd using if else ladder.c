#include <stdio.h>
#include <conio.h>
int main()
{
  int num =0;
  printf("\n enter an integer number =");
  scanf("%d",&num);
  if(num == 0)
  {
      printf("\n given no is neutral.");
  }
  else if(num % 2 == 0)
  {
      printf("\n given number is EVEN");
  }
  else
  {
      printf("\n given number is ODD");
  }
  printf("\nThanks");
  return 0;
}