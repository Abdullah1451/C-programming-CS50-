#include<stdio.h>

int main()
{
    int a[5];
    int t=0;


    for(int i=0; i<5; i++)
    {
        printf("\n Enter The Value Of a[%d] =  ",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=0; i<5; i++)
    {
        int j=i-1;
        t=a[i];

        while(j>=0 && a[j]>t)//  while( a[j]>temp && j>=0){{{{ this gives an runtime error}}}}} index -1 out of bounds
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=t;
    }

    printf("\n\n\n\n");

    for(int i=0; i<5; i++)
    {
        printf("\n\n Enter The Value Of a[%d]  = %d  ",i+1,a[i]);
    }

}