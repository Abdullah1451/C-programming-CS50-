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

        for(int j=0; j<=5-2-i; j++)
        {
            if( a[j] > a[j+1] )
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }

        }
    }

    for(int i=0; i<5; i++)
    {
        printf("\n The Value Of a[%d]  = %d  ",i+1,a[i]);
    }

}