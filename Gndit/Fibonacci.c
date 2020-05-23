#include<stdio.h>
int main()

{

    int n;

    printf("Enter A Number");
    scanf("%d",&n);

    for(int i=0,j=1,temp=0; n>0; n--)
    {
        temp=i;
        i+=j;
        j=temp;
        printf(" %d ",j);
    }
}