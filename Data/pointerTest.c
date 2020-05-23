#include<stdio.h>
#include<string.h>
int main()

{

    //char* str = "Gate 2018";
   // char *p = str;


   // printf("%s",p+p[3]-p[1]);    //

    int g[2], *p, *q;
    p = g;
    q = p + 1;
    printf("%p\n", q);
    printf("%p\n", p);

    //printf("%d\n", (int)q); /* 1 is printed */
    //printf(  "%d\n  ",(int) q - (int) p);

}