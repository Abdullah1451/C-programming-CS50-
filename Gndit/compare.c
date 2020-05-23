#include<stdio.h>
int main()
{
    int a[15],n,temp;

    printf("\n Enter How Many Numbers = ");
    scanf("%d",&n);


    printf("\n Enter Numbers \n");
    for(int i=0; i<n; i++)
    {
        scanf(" %d",&a[i]);
    }


    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];

                a[i]=a[j];

                a[j]=temp;

            }
        }
    }

    printf("In Ascending Order \n");
    for(int i=0; i<n; i++)
    {
        printf("\n %d",a[i]);
    }

}