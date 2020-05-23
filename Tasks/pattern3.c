#include<stdio.h>
int main()
{
 int n,d;
 printf("enter no.\n");
 scanf("%d",&n);
 
 for (int i=1; i<=n;i++)
 {
    for(int j=1;j<=i;j++)
    {
        d=2*j;
         printf("%d ",d);
            
    }
         printf("\n");
        
 }
}