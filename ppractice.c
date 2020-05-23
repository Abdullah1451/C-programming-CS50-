// bubble  sort

#include<stdio.h>
int main()
{
    int arr[9];

    arr[6]=99;
    for(int i=0; i<9;i++)
    {
        printf("\n arr[%d] = %d",i+1,arr[i]);
    }
}

























/*// INSERTION SORT
#include<stdio.h>

int main()
{
    int a[15]={15,45,75,11,2,85,56,1,34,77,90,445};
    int temp=0;

    for (int i=0; i<15 ;i++)
    {
        int j=i-1;
        temp=a[i];

        while( a[j]>temp && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(int i=0;i<15;i++)
    {
        printf(" %d ",a[i]);
    }
}*/