#include <stdio.h>
#include <conio.h>
int main()
{
  int Num1=0,Num2=0;
  printf("\n Enter two integer numbers=");
  scanf("%d%d",&Num1,&Num2);
    if(Num1==Num2)
    {
        printf("\n Both given number are equal");
    }
    else if(Num1 > Num2)
    {
        printf("\n number %d is maximum",Num1);
    }
    else
    {
        printf("\n number %d is Maximum",Num2);
    }
    printf("\n Thanks");
  return 0;
}