#include<stdio.h>
int main()
{
    int n,i,k,j;
    printf("enter how many rows : ");
    scanf("%d",&n);
    for(i=n; i>0; i--)
    {
        for(k=0; k<n-i; k++)
            printf(" ");

        for(j=1; j<=i; j++)
            printf(" %d",j);

        printf("\n \n");
    }
}