#include<stdio.h>
int main()
{
    int i,n,sum=0;
    
printf("Enter any positive integer\n ");
    scanf("%d",&n);
    
    for ( i=1; i<=n && n>=1; i++)
       {
           sum += i;
       }
            printf("Sum of first %d natural numbers = %d", n, sum);
}