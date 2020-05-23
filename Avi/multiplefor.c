#include<stdio.h>
int main()
{
    int max,num,num2=0;

    printf("Enter a max number\n");
     scanf("%d",&max);

    printf("Enter any number\n");
     scanf("%d",&num);

    for( int i = 1; max>num2; i++)
    {
        num2=num*i;
        printf("%d",num2);
    }
}