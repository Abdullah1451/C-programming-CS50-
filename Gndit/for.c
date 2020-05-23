#include<stdio.h>
int main()
{
    int x=10;
    int*y=&x;
    int**z=&y;

    printf("value of x  =  %d\n",x);
    printf("value of x by y = %d\n",*y);
    printf("value of x by z = %d\n",**z);
    printf("value of y by z  = %d\n",**z);
    printf("address of x  = %p\n",&x);
    printf("vlue of y = %p\n",y);
    printf("address of y = %p\n",&y);
    printf("value of z = %p\n",z);
    printf("address of z = %p\n",&z);
}