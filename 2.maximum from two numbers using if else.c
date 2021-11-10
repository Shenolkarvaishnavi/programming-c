#include <stdio.h>
#include <conio.h>
int main()
{
int Num1=0,Num2=0;
  printf("\n Enter two integer numbers=");
  scanf("%d%d",&Num1,&Num2);
      if(Num1>Num2)
       {
           printf("\n Num1= %d is max.",Num1);
       }
      else
       {
           printf("\n Num2= %d is max.",Num2);
       }
  return 0;
}
