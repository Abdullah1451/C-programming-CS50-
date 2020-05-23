#include<stdio.h>
int main()

{
    int num;
    printf("enter any number\n");
    scanf("%d",&num);
    
    if(num%2==0)
      printf("The number %d is even",num);
     
     else
      printf("The number %d is odd",num);
    
}