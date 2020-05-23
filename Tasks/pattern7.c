#include<stdio.h>
int main()
{
    int i,k,j,rw;

    printf("row =  ");
     scanf("%d",&rw);

    for(i=0; i<=rw; i++)
        {
            for(j=i; j<rw; j++)
                {
                    printf(" ");
                }
            for(k=0; k<i*2; k++)
                {
                    printf("* ");

                }
            printf("\n");
        }

}