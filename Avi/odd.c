#include<stdio.h>
int main()
{
   int a;
   
printf("Enter any number :  ");
     scanf("%d",&a);
     
      for(int i=1;i<=a && a>=1; i++)
          {
              int d=i%2;
               if(d!=0)
                   printf("\n %d \n ",i);
           }
}