#include<stdio.h>
#include <string.h>

int main()
{
    char name[] ="tibit";
   // printf("Enter Your Name \n ");
   // scanf("%s",name);
   int isPallindrome =1;

    int size = sizeof(name)/sizeof(name[1]);

    printf("size of array is %lu \n", sizeof(name));
    for(int i=0,j=size-1;j>0 && i<size/2;j--,i++)
    {

            printf("i is %c and j is %c \n", name[i], name[j-1]);

            if(name[i]!=name[j-1])
                isPallindrome = 0;

    }
    if(isPallindrome >0)
        printf("is a pallindrome");
    else
        printf("is not a pallindrome");
}
