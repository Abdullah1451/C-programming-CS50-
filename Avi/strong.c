#include<stdio.h>
int main()
{
    int num,n,r,sum=0,f,i;
    printf("no. likh be = ");
    scanf("%d",&num);
  
    n=num;
    
    while(n)
        {
           
            r=n%10;
            i=1;
            f=1;
            while( i<=r)
            {
                
                f*=i;
                i++;
            }
               
            sum+=f;
            n/=10;
              
        }   
        
        if(num==sum)
            printf("hai");
        else
            printf("krke dekh le cal me");
      
}