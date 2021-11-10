#include <stdio.h>
#include <conio.h>
int main()
{
  int No = 0,fact = 0,Temp = 0;
  printf("\n enter no to calculate its fact.=");
  scanf("%d",&No);
  
    for(fact=1,Temp=No;Temp>1;fact *= Temp,Temp--);
    printf("\n factorial of no.= %d",No,fact);
    
    printf("\n\n Thanks");
 }