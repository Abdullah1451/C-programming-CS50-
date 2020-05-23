#include<stdio.h>
int main()
{
    int n,i;


    printf("no. of rows = ");
     scanf("%d",&n);

    for(i=0; i<n; i++)
        {
            int k = n*2 -1;
            char ch = 65;
            int j=0;

            while(j<k)
                {
                   if(j>n-1-i && j<n-1+i)
                        printf("  ");

                    else
                         printf("%c ",ch);

                    if(j>=n-1)
                        ch--;
                    else
                        ch++;
                    j++;
                }
            printf("\n");
       }

}
