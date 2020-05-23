#include<stdio.h>
int main()
{
    char a[4]={'q','e','r','t'};
    //char*p;
   // p=a;
    printf("a  %s\n",a);
    //printf(" p = %p",p);
    printf("a = %p\n",a);
     printf("a  = %c\n",a[0]);

    printf("a = %p\n",a+1);
     printf("a  = %c\n",*(a+1));

    printf("a = %p\n",a+2);
     printf("a  = %c\n",*(a+2));

    printf("a = %p\n",a+3);
     printf("a  = %c\n",*(a+3));

    printf("a = %p\n",a+4);
    printf("a  = %c\n",*(a+4));
}