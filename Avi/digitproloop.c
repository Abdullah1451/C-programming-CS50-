#include<stdio.h>
int main()
{
    
    
  int number,pro=1;
    
 printf("enter any digit number to mutiple digits\n");
     scanf("%d",&number);
        while(number!=0)
              {
                  pro*=number%10;
                   number=number/10;
              }
 printf("the product of digits is = %d",pro);
}