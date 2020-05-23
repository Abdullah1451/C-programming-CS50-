#include<stdio.h>

int main()
{
     int a[15]={15,45,75,11,2,85,56,1,34,77,90,445,5,5,1};

     int n,m=0;

     printf("\n What ELement : ");
     scanf("%d",&n);

     for(int i=0; i<15; i++)
     {
         if(a[i]==n)
         {
             printf("\n Found The Element : %d At Location : %d ",n,i+1);
             m=1;
         }
     }
     if(m==0)
     {
        printf("\n ELEMENT NOT FOUND");
     }
}