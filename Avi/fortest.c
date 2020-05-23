#include<stdio.h>

void swap();
void swap2();
int main()
{
    int  a=5,b=4;
    int c=6,d=7;


    printf("\n Before swapping a= %d  b= %d",a,b);
    printf("\n Before swapping c= %d  d= %d",c,d);
    swap(&a,&b);
    swap2(c,d);
    printf("\n After Swapping a= %d ,b = %d ",a,b);
    printf("\n After Swapping c= %d ,d = %d ",c,d);

}

void swap(int* a,int* b)
{
    int t=*a;
        *a=*b;
        *b=t;

}

void swap2(int a,int b)
{
    int t=a;
        a=b;
        b=t;
}