#include<stdio.h>

int main()
{
    int marks[5];

    for(int i=0; i<5; i++)
    {
    printf("Give Marks Of Five Student");
        scanf("%d",&marks[i]);
    }
        for(int i=0; i<5; i++)
            printf("Roll no %d - Marks %d \n",i+1,marks[i]);


}