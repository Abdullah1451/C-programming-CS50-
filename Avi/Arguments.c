#include<stdio.h>
#include<string.h>

int main(int count, char *arrString[])
{
   char name[30] = "Hello";
    printf("String before strrev( ) : %d\n",count);
   for(int i=0;i<count;i++)
   {
       printf("String %d  is : %s\n",i,arrString[i]);
   }

   printf("String before strrev( ) : %s\n",name);

   printf("String after strrev( )  : %lu",strlen(name));


}