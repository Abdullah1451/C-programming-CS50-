#include<stdio.h>
int main()

{
    int remainder;
     long number,reverse=0;
     char h='y';
while(h=='y' || h=='Y')
{
    printf("Enter any number to reverse\n");
           scanf("%ld",&number);
      while(number!=0)
{     
    remainder=number%10;
    reverse=reverse*10+remainder;
    number/=10;
  
}
 printf("%ld",reverse);
 
 printf("\nreverse again\n");
 getchar();
   scanf("%c",&h);
}
}