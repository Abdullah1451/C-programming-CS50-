#include<stdio.h>
int main()

{
    int number,reverse=0,remainder;
    
    printf("enter five digit number to reverse\n");
           scanf("%d",&number);
           
           if (number>=100000)
        printf("samjh nhi aata five digit number likhne ko bola h");
        
    else if (number<9999)
        printf("samjh nhi aata five digit number likhne ko bola h");
        
    else
    {
    remainder=number%10;
    reverse=reverse*10+remainder;
    number/=10;
    
   
    remainder=number%10;
    reverse=reverse*10+remainder;
    number/=10;
    
    remainder=number%10;
    reverse=reverse*10+remainder;
    number/=10;
    
      remainder=number%10;
    reverse=reverse*10+remainder;
    number/=10;
    
      remainder=number%10;
    reverse=reverse*10+remainder;
    number/=10;
    
    
       printf("%d",reverse);
    }
}