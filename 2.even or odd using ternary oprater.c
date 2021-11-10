#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
     int Num=0;
     
     printf("\n Enter an Integer to Check Wheather it is Even or Odd=>");
     Up:
  
     scanf("%d",&Num);
  
        
        if(Num==0)
         {
            printf("\n Given Number is Neutral.\n\n please enter other than Zero Integer to check wheather it is Even or Odd=>");
            goto Up;
          }
 
         (Num%2==0)? printf("\n Given Number is Even."): printf("\n Given Number is Odd.");
       
  
    
     printf("\n\n Thanks...");
     return 0;
}