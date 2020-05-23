#include<stdio.h>
int main()

{
    char a;
    
    printf("enter any alpha  :  ");
    scanf("%c",&a);
    
    while(a>='a' && a<='z')
    {
        printf("\n%c\n",a);
         a++;
    }
}