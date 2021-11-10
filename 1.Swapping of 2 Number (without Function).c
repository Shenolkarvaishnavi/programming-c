#include <stdio.h>
#include <conio.h>
int main()
{
 int num1 =  0,num2 = 0,temp = 0;
    printf("\n enter two numbers for swapping=");
    scanf("%d%d",&num1,&num2);
    printf("\n before swapping first number=%d.",num1);
    printf("\n before swapping second number=%d.",num2);
       temp=num1;
       num1=num2;
       num2=temp;
    printf("\n after swapping first number=%d.",num1);
    printf("\n after swapping second number=%d.",num2);
    printf("\n\n Thanks");
    
    return 0;
 }