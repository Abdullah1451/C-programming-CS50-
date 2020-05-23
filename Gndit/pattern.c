#include<stdio.h>
int main()
{
    int s[4][2]={ {1234,56},{1212,33},{1434,80},{1312,78}};
    int arr[3] = {33,44,55};
     printf("\n arr %p",arr);

    int (*p)[2];
    int i,j,*pint;
    for(i=0; i<=3;i++)
    {
        p=&s[i];
        pint=*p;
        printf("\n");
        printf("\n&s = %p ",(s[i]));
        printf("\np = %p ",(*p));
        printf("\n pint = %p ",pint);
        for(j=0;j<=1;j++)
            printf("\n %d ",*(pint+j));
    }
}