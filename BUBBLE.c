#include<stdio.h>
void bubble_sort(int a[])// Yaha ARRAY ka Initialize Krenge int a[] bssss
{
    int i,temp=0,round;
    for(round=0;round<=4;round++)
    {
        for(i=0;i<=4-round-1;i++)
        {
            if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
        }
    }
}
int main()
{
    int a[5],i;
    for(i=0;i<=4;i++)
    {
        printf("\n Enter the element : ");
        scanf("%d",&a[i]);// & Nhi Lgaya Tha Yaha
    }
    bubble_sort(a);// Fucntion Call Krte Hui Hamesha Argument Pass krna Hota H Kyuki Tujhe Sirf ARRAY Se Kam Tha Isliye a Pass Kiya

    for(i=0;i<=4;i++)// Aur Print Bhi Krwana Hota H
    {
        printf("  %d",a[i]);
    }

}