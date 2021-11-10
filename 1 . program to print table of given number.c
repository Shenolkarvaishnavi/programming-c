#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int No =0,Cnt = 0;
  printf("\n enter a number to print it's table=");
  scanf("%d",&No);
  for(Cnt=1;Cnt<=10;Cnt++)
  {
    printf("\n\t %3d * %3d = %3d",No,Cnt,(No*Cnt));
    
  } 
  getch();
  printf("\n thanks");
  return 0;
}