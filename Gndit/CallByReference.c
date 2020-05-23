#include<stdio.h>

int ref(int* p)
{
    *p =*p+1;
    return 1;
}


int main()
{
    int a=10;
    printf("before a = %d\n",a);
    printf(" A  = %p\n",&a);

    ref(&a);
    printf("after  A  = %d\n",a);

}