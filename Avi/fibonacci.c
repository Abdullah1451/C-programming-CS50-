#include <stdio.h>
int main ()
{
  int s;
  printf("kitni baar = ");
    scanf("%d",&s);
   for(int first=0,second=1,temp; s>0; s--)
     {
       temp=second;
         second+=first;
         first=temp;
         printf(" %d ",second);
     }

}