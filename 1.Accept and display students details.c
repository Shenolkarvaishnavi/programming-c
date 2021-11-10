#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{ 
  char Grade='\0';
  int R_no=0;
  float percentage=0.0;
  char Nm[80]=" ";
  printf("\n enter student details=>\n");
  
  printf("\n enter student Roll no =");
  scanf("%d",&R_no);
  
  fflush(stdin);
  printf("\n\t enter student name =");
  scanf("%s",&Nm);
  
  printf("\n\t enter student percentage =");
  scanf("%f",&percentage);
  
  printf("\n\t enter student grade =");               
  scanf("%c",&Grade);
  

  system("cls");
  
  printf("\n\t student information \n");
  printf("\n========*******============\n");
  
  printf("\n\t Roll number=%d.\n\t name=%s.\n\t percentage=%f.\n\t Grade=%c",R_no,Nm,percentage,Grade);
  printf("\n\n =========******==========\n");
  return 0;
}