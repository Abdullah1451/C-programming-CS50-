#include<stdio.h>
int main()
{
    long max,num,num2=0,i=1;
    
printf("Enter a max number\n");
     scanf("%ld",&max);
    
printf("Enter any number\n");
     scanf("%ld",&num);
     
while ((num2=num*i)<=max)
{
    
    i++;
printf("\n%ld\n",num2);
    
}
}