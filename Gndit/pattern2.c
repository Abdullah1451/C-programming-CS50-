#include<stdio.h>
int main()
{
    int n;
        printf("qwerty keypad   =  ");
        scanf(" %d",&n);

    for(int i=0; i<n; i++)
    {

        for(int k=i; k>0; k--)
        printf(" ");

        for(int j=n-i; j>0; j--)
        printf("* ");

            printf("\n");
    }
}