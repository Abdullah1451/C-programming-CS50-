//MULTIPLICATION OF TWO MATRIX
#include<stdio.h>

int main()
{
    int a[20][20],b[20][20],result[20][20],r1,c1,r2,c2;

    printf("\nEnter The Number Of Row And Column Of First Matrix : ");
    scanf("%d%d",&r1,&c1);

    printf("\nEnter The Number Of Row And Column Of Second Matrix : ");
    scanf("%d%d",&r2,&c2);

    while(c1!=r2)
    {
        printf("\nThe Columns Of First Matrix Is Not Equal To Row Of Second Matrix\nEnter Again");

        printf("\nEnter The Number Of Row And Column Of First Matrix : ");
        scanf("%d%d",&r1,&c1);

        printf("\nEnter The Number Of Row And Column Of Second Matrix : ");
        scanf("%d%d",&r2,&c2);
    }

    printf("Enter Elements Of First Matrix : ");

    for(int i=1; i<=r1; i++)
    {
        for(int j=1; j<=c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter Elements Of Second Matrix : ");

    for(int i=1; i<=r2; i++)
    {
        for(int j=1; j<=c2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=1; i<=r1; i++)
    {
        for(int j=1; j<=c2; j++)
        {
            result[i][j]=0;
        }
    }

    for(int i=1; i<=r1; i++)
    {
        for(int j=1; j<=c2; j++)
        {
            for(int k=1; k<=c1; k++)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Output \n");

    for(int i=1; i<=r1; i++)
    {
        for(int j=1; j<=c2; j++)
        {
            printf("%d\t",result[i][j]);

        }

                printf("\n");
    }





}