#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
 
    int Lch='\0',Sch='\0',Ech='\0';
  
    printf("\n Enter Starting Character=>");
    scanf("%c",&Sch);
  
    printf("\n Enter Ending Character=>");
    scanf("%c",&Ech);
  
        if(Sch<Ech) 
         {
            
              for(Lch=Sch;Lch<=Ech;Lch++)
               {
                
                    printf("\n %c",Lch);
      
               }
      
         }
        else
         {
               for(Lch=Sch;Lch>=Ech;Lch--)
                {
                 
                     printf("\n %c",Lch);
                 
                }
         }
  
  
    printf("\n\n Thanks....");
    getch();
    return 0;
 
 }