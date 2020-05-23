#include<stdio.h>

int main()

{
    int a;
    int isPrime  = 1;
    
printf("Enter any number \n ");
     scanf("%d",&a);
     
   for(int i =a/2;i>1; i--)
     {
         int d=a%i;
        if(d==0)
            isPrime = 0;
         
     } 
     
    if(isPrime)
        printf("\nis a prime\n");
    else
        printf("is not a prime");
        
}