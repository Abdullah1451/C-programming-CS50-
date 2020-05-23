#include<stdio.h>
int main()
{
    
    
    int number,r1,r2,r3,r4,r5,sum,z;
    
    printf("enter five digit number to add first digit and last digit\n");
           scanf("%d",&number);
           z=number;
           if (number>=100000)
        printf("samjh nhi aata five digit number likhne ko bola h");
        
    else if (number<9999)
        printf("samjh nhi aata five 2 digit number likhne ko bola h");
        
    else
{
    
     r1=number%10;
    number/=10;
    
      r2=number%10;
    number/=10;
    
      r3=number%10;
    number/=10;
    
      r4=number%10;
    number/=10;
    
      r5=number%10;
    number/=10;
        
    sum=r1+r5;
    
    printf("The sum of digits of %d is %d",z,sum);    
    }
}