#include<stdio.h>


void binarySearch(int a[],int l,int r,int n)
{
    int mid=l+(r-l)/2;


    if(a[mid]==n)
    {
        printf("\n Found");
        return;
    }

    else if(a[mid]>n)
    {
        binarySearch(a,l,mid-1,n);
    }
    else if(a[mid]<n)
    {
        binarySearch(a,mid+1,r,n);
    }
}










int main()
{
    int a[12]={1,3,5,10,12,19,20,25,30,45,49,55};
    int  n;

    printf("\n Which ELement : ");
    scanf("%d",&n);

    binarySearch(a,0,11,n);

}