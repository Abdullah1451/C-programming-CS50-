#include<stdio.h>

int main()
{
    int a[7];
    int t=0,temp=0;


    for(int i=0; i<6; i++)
    {
        printf("\n Enter The Value Of a[%d] =  ",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=0; i<7; i++)
    {
        t=i;
        for(int j=i+1; j<7; j++)
        {

            if( a[t] > a[j] )
            {
                t=j;
            }
        }
            temp=a[i];
            a[i]=a[t];
            a[t]=temp;

    }

    for(int i=0; i<7; i++)
    {
        printf("\n The Value Of a[%d]  = %d  ",i+1,a[i]);
    }

}