#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
    int Num1=0,Num2=0;
    
    Grade:
    
    printf("\n Enter Two Integer Numbers=>");
    scanf("%d%d",&Num1,&Num2);
   
     
  
    if (Num1==Num2)
     {
     
        printf("\n Both Given Numbers are Equal.\n Please Enter Different Numbers to Compare,\n");
        goto Grade;
     }
   
   
    (Num1>Num2)? printf("\n Number %d is Maximum.",Num1): printf("\n Number %d is Maximum.",Num2);
       
      
    printf("\n\n Thanks....");
    return 0;
 
 }