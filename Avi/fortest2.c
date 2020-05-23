#include<stdio.h>
int main()
{
    int ch,a,b,s=0;
    printf("enter the no = = ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("enter value of a and b\n");
        scanf("  %d  %d",&a,&b);
        s=a+b;
        printf("Addition = = %d ",s);
        break;

        case 2:
        printf("enter value of a and b\n");
        scanf("  %d %d",&a,&b);
        s=a*b;
        printf("Multiplication  = = %d",s);
        break;

        case 3:
        printf("enter value of a and b\n");
        scanf("  %d  %d",&a,&b);
        s=a-b;
        printf("Din=vision = = = %d",s);
        break;

        default:
        printf("there no option like that  %d",ch);
    }
}