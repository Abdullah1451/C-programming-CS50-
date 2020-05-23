#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int num,digit=0,num2,result=0,remain;

 printf("any no.  = ");
   scanf("%d",&num);

digit=floor (log10 (abs (num))) + 1;
printf("\n %d \n ",digit);

      num2=num;
  while(num2!=0)
       {
        remain=num2%10;
        result+=pow(remain,digit);
        num2/=10;
       }
       if(result==num)
     printf("%d is armstrong number ",num);
     else
     printf("%d not armstrong number ",num);
}