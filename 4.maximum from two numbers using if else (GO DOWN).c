#include <stdio.h>
#include <conio.h>
int main()
{ 
  int Num1=0,Num2=0;
  printf("\n Enter two integer number=");
  scanf("%d%d",&Num1,&Num2);
  
  if(Num1==Num2)
  {
      printf("\n Both numbers are equal");
      goto down;
  }
  if(Num1>Num2)
  {
      printf("\n Num 1 is greater than Num 2",Num1);
  }
  else
  {
      printf("\n Num 2 is greater than Num 1",Num2);
  }
 down:
   {
       printf("\n Thanks");
   }
  return 0;
}