#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main ()
{
    int No=0,Sum=0,Cnt=0;
  
    printf("\n Enter Number to calculate their sum \n =>");
 
     for(Cnt=1; ;Cnt++)
      {
       
     
         printf("\n\t Enter Number %d=",Cnt);
         scanf("%d",&No);
           if(No<=0)
           {
             break;
           }
     
           Sum=Sum+No;
           }
     
      printf("\n Press Any key To get Summation of Given Numbers=>");
    
    system("cls");
    
    printf("\n Summation of Given Number=%d",Sum);
     
    printf("\n\n Thanks....");
    getch ();
    return 0;

}