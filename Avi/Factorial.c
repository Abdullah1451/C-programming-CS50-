#include<stdio.h>

int main()
{
    long int num;
    printf("Enter Any Number =  ");
    scanf("%ld",&num);

    for(long int num2=num-1; num2>0; num2--)
        {
            num=num2*num;
        }
        printf("%ld \n",num);
}