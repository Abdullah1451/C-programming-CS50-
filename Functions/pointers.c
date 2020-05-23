#include<stdio.h>
int main()
{
    int i=7;
    int*j;
    int**k;


    j=&i;
    k=&j;

        printf("\n adress of i ===  %p",&i);

        printf("\n adress of i  = == %p",j);

        printf("\n adress of i  = == %d",*(&i));

        printf("\n adress of i  = == %d",*j);

        printf("\n address of i === %d",**k);
}