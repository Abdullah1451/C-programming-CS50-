#include<stdio.h>
int main()

{
    long int n,n3=0;

    printf("Enter The Number You Want To Factorial =   ");
    scanf("%ld",&n);
    n3=n;
    if(n>0)
    {
    for(int n2=n-1; n2>0; n2--)
    {
        n=n2*n;
    }

    printf("Factorial of %ld! == %ld",n3,n);
    }

    else if(n==0)
        printf("Factorial of 0! == 0");
    else
    printf("Invalid Input");


}