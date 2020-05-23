#include<stdio.h>
int main()

{
    int a;
    
    
printf("Enter any number :  ");
     scanf("%d",&a);
     
   while(a>1)
     {
         int isPrime  = 1;
         for (int i=a/2;i>1; i--)
             {   int d=a%i;  
                 if(d==0)
                    isPrime  = 0;
            }
        if(isPrime!=0)
            printf("%d \n ",a);
            
            a--;
    
     } 
}