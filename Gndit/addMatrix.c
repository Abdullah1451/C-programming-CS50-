#include<stdio.h>
int main()
{
    int r,c,fMatrix[10][10],sMatrix[10][10],sum[10][10];
    printf("\nEnter The Number Of Rows And Columns of matrix \n");
    scanf("%d%d",&r,&c);

    printf("Enter Elements Of First Matrix\n");

    for(int i=0; i<c; i++)
     {
         for(int j=0; j<r; j++)
            scanf("%d",&fMatrix[i][j]);
     }

    printf("Enter Elements Of Second Matrix\n");

    for(int i=0; i<c; i++)
     {
         for(int j=0; j<r; j++)
            scanf("%d",&sMatrix[i][j]);
     }

    printf("Your Matrix After Addition Is \n");
      for(int i=0; i<c; i++)
     {
         for(int j=0; j<r; j++)
         {
            sum[i][j]=fMatrix[i][j]+sMatrix[i][j];

            printf("%d\t",sum[i][j]);
         }
         printf("\n");

     }

}