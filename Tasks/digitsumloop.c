#include<stdio.h>
int main()
{
    
    
  int number,sum=0;
    
 printf("enter any digit number to add digits\n");
     scanf("%d",&number);
        while(number!=0)
              {
                  sum+=number%10;
                   number=number/10;
              }
 printf("the sum of digits is = %d",sum);
}