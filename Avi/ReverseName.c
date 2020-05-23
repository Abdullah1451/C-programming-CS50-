#include<stdio.h>



int main()
{
    char name[10];
    printf("Enter Your Name \n ");
    scanf("%s",name);

    int count=0;

    for(int j=10;j>0;j--)
        {
                printf("%c",name[j-1]);

        }

    while(name[count]!='\0')
    {
        count++;
    }

    printf("\nsize = %d",count);


}