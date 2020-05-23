#include<stdio.h>
int main()
{
  int tab,num,r=0;
  printf("write table no. = ");
  scanf("%d",&tab);
      for(num=1;num<=10;num++)
         {
            r=tab*num;
            printf("\n %d * %d = %d \n",tab,num,r);
             
         }
}