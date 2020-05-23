#include<stdio.h>
int main()
{
   int a,i,sum=0;
   
printf("Enter any number :  ");
     scanf("%d",&a);
     
      for(i=1;i<=a && a>=1; i++)
          {
              int d=i%2;
               if(d==0)
                  {
                      sum=sum+i;
                   
                  }
           }
           printf("\n %d \n ",sum);
}
