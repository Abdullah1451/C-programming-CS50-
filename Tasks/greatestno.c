#include<stdio.h>
int main()

{
    int a,b,c;
    
 printf("enter any three numbers \n a.");

 scanf("%d",&a);
 
 printf("\n b.");
 
 scanf("%d",&b);
 
 printf("\n c.");
 
 scanf("%d",&c);
 
 if(a==b)
    if(b==c)
        printf("all are same");
    else if(c>b)
        printf("c is greatest");
    else
        printf("a and b are same");

 else if(a>b)
    if(a==c)
        printf("a and c are same");
    else if(a>c)
        printf("a is biggest");
    else
    printf("c is biggest");

else
{
    if(b == c)
        printf("b and c are same");
    else if(b>c)
        printf("b is biggest");
    else
        printf("c is biggest");
}


}