#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main ()
{
    int No=0,Sum=0,Cnt=0;
  
    printf("\n Enter Numbers to calculate their sum\n=>");
 up:
         printf("\n\t Enter Number %d=",Cnt);
         scanf("%d",&No);
     
       if(No<=0)
       {
           goto out;
       }
           Sum=Sum+No;
           Cnt++;
           goto up;
    out:
    printf("\n Press Any key To get Summation of Given Numbers=>");
    
    
    
    printf("\n Summation of Given Number=%d",Sum);
     
    printf("\n\n Thanks....");
    getch ();
    return 0;

}