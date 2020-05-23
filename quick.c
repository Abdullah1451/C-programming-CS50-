#include<stdio.h>
#include<stdlib.h>

void swap(int arr[],int l,int r)
{
    int t=arr[l];
    arr[l]=arr[r];
    arr[r]=t;
}

int partition(int arr[],int l,int r,int pivot)
{
    while(l<=r)
    {

        while(arr[l]<pivot)
        {
            l++;
        }
        while(arr[r]>pivot)
        {
            r--;
        }

        if(l<=r)
        {
            swap(arr,l,r);
            l++;
            r--;
        }
    }
    return l;
}


void quicksort(int arr[],int l, int r)
{
    if(l<r)
    {
        int pivot=arr[(l+r)/2];
        int pi=partition(arr,l,r,pivot);

        quicksort(arr,l,pi-1);
        quicksort(arr,pi,r);
    }

}


void printArray(int arr[],int as)
{
    printf("{");
    for(int i=0; i<as; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("}\n");
}


int main()
{
    int arr[]={55,12,45,75,11,2,85,22,99,7};
    int asize=sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, asize);


    quicksort(arr,0,asize-1);

    printf("\nSorted array is \n");
    printArray(arr, asize);
    return 0;
}