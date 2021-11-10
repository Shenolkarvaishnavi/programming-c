#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{ 
  int No =0,Cnt = 0;
  printf("\n enter a number to print its table =");
  scanf("%d",&No);
  for(Cnt=10;Cnt>=1;Cnt--)
  {
    printf("\n\t %3d * %3d = %3d",No,Cnt,(No*Cnt));
  }
  printf("\n\n Thanks");
  return 0;
}