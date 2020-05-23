#include<stdio.h>
int main()
{
    char alpha;
    
    printf("Enter any alphabet :  ");
       scanf("%c",&alpha);
       
    if (alpha>='a'&& alpha<='z')
       printf("this an alphabet %c",alpha);
       
    else if (alpha>='A' && alpha<='Z')
        printf("this is an alphabet %c",alpha);
    else
    printf("bhaag yha se");
}