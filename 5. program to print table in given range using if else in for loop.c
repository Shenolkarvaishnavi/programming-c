#include <stdio.h>
#include <conio.h>
//Compiler version gcc  6.3.0

int main()
{
  int RN=0,CN=0,SNo=0,ENo=0;
  
       printf("\n Enter Tables Range from & To=");
       scanf("%d%d",&SNo,&ENo);
 
       printf("\n Tables from %d To %d as Follows \n\n",SNo,ENo);
       printf("\n----------------------*****-------------------------\n");
         
           for (RN=1;RN<=10;RN++)
            {
               
               if(SNo<ENo)
                {
                    
                    for(CN=SNo;CN<=ENo;CN++)
                     {
                        
                           printf(" %3d ",CN*RN);
        
                     }
                 
                }
               
               else
                {
                    for(CN=SNo;CN>=ENo;CN--)
                     {
       
                          printf(" %3d ",CN*RN);
      
                      }
    
                }
                     printf("\n");
 
          }
  
      printf ("\n----------------------******------------------------\n");
  
      printf("\n Thanks....");
      return 0;
}