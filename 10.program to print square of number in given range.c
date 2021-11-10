#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int SNo = 0,ENo = 0;
  printf("\n enter start number =");
  scanf("%d",&SNo);
  
  printf("\n enter end number =");
 scanf("%d",&ENo);
  
 printf("\n======================");
 printf("\n number square\n");
  
  
  while(SNo<=ENo)
  {
    printf("\n %4d = %4d",SNo,(SNo*SNo));
    SNo++;
  }
  printf("\n =====================");
  printf("\n Thanks");
  return 0;
}