#include<stdio.h>
int main()
{
    int rw,i,n=65,j;

    printf("row =  ");
     scanf("%d",&rw);

    for(i=0; i<rw; i++)
        {
            for(j=rw; j>i; j--)
                {
                    printf("%c ",n);

                }
                n++;
            printf("\n");
        }
}