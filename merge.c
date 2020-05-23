#include<stdio.h>


void merge(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;

    int L[n1],R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i=0;
    j=0;
    k=l;


    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k++]=L[i++];
        }
        else
        {
            arr[k++]=R[j++];
        }
    }

    while(i<n1)
    {
        arr[k++]=L[i++];
    }
    while(j<n2)
    {
        arr[k++]=R[j++];
    }

}


void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {

        int m=(l+r)/2;

        mergesort(arr,l,m);

        mergesort(arr,m+1,r);


        merge(arr,l,m,r);

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
    int arr[6]={12,45,75,11,2,85};
    int asize=sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, asize);


    mergesort(arr,0,asize-1);

    printf("\nSorted array is \n");
    printArray(arr, asize);
    return 0;
}




















/*
#include<stdlib.h>
#include<stdio.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    printf("\n Merging l-%d, m->%d, r->%d \n", l,m,r);


    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];


    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void mergeSort(int arr[], int l, int r)
{
    printf("\n arr size 0 is %p ",arr);
    printf("\n lll  is %d ",l);
    printf("\n rrrr size is %d \n",r);

    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;8//5rrt
        printf("\n mmm  is %d \n",m);

        // Sort first and second halves
        mergeSort(arr, l, m);

        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}


int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("\n arr size 0 is %lu \n",sizeof(arr[0]));
    printf("\n arr  is %lu \n",sizeof(arr));
    printf("\n arr size is %d \n",arr_size -1);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
*/