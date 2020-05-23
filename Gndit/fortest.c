//for three digits

#include<stdio.h>

int main()
{
    int sum=0,m,n,dig;
    printf("enter the number");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        dig=n%10;
        sum=sum+(dig*dig*dig);
        n=n/10;
    }
    if(m==sum)
    printf("it is armstrong");
    else
    printf("not armstrong");
}