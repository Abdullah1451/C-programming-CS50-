//Largest And Smallest Number Array
#include<stdio.h>
int main()
{
    int arr[5];
    int largest=0,smallest;

    for(int i=0; i<5; i++)
    {
       printf("Enter %d Number \n",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i =0;i<5;i++)
    {
        if(arr[i]>largest)
            largest = arr[i];
    }

    smallest=largest;
    for (int i=0;i<5;i++)
    {
           if(arr[i]<smallest)
              smallest=arr[i];
    }

    printf("the largest number is %d =  \n And Smallest Number Is %d =  ", largest,smallest);
}