#include<stdio.h>
int main()
{
    int rw;
    printf("row =  ");
     scanf("%d",&rw);

    for(int i=1; i<=rw; i++)
        {
            for(int j=rw; j>i; j--)
               {
                    printf("   ");
               }
            for(int k=1; k<=i; k++ )
               {
                    printf("*  ");
               }

            printf("\n");
        }
    for(int i=1; i<rw;i++)
        {
            for(int j=1;j<=i;j++)
                {
                    printf("   ");
                }
            for(int k=rw-i;k>=1;k--)
                {
                    printf("*  ");
                }
            printf("\n");
        }

}
