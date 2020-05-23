#include<stdio.h>
int main()
{
    int rw,i,j;

    printf("row = ");
      scanf("%d",&rw);

    for(i=0,j=rw; i<rw; i++,j++)
       {
           int b=i*2+1;
         for(int n=1,k=j; k>0; k--)
            {
               if (k>b)
                 printf("  ");

               else if (k>i+1)
                 printf("%d ",n++);

                  else
                  printf("%d ",n--);
            }
            printf("\n");
       }
}