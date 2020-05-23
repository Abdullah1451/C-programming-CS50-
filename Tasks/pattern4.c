#include<stdio.h>
int main()
{
   int n,l,j,num=1;
   printf("kitne = ");
    scanf("%d",&n);

     for(l=0;l<n;l++)
        {
            printf("\n");
           for(j=n-1; j>=0; j--)
             {
                 if (j>l)
                 printf(" ");
                 else
                 printf("%d ",num++);

             }
        }
}