#include<stdio.h>

#pragma pack(1)
struct stu
{
   int x,y;
   char c;

};



int main()
{
   struct stu p1={4,7,'a'};

   printf("size of  p1 =%lu ",sizeof(p1));
}