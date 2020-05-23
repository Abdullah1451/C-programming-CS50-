#include<stdio.h>
int main()
{
    int rw;

    printf("row =  ");
     scanf("%d",&rw);

    for(int i=0; i<rw; i++)
        {
            for(int j=i; j>0; j--)
                {
                    printf(" ");
                }
            for(int k=rw-i; k>0; k--)
                {
                    printf("* ");
                }
            printf("\n");
        }
    for(int i=1; i<rw; i++)
        {
            for(int j=rw-i; j>1; j--)
                {
                    printf(" ");
                }
            for(int k=0; k<=i; k++)
                {
                    printf("* ");
                }
            printf("\n");
        }

}