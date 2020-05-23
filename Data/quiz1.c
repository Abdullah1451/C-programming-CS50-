#include<stdio.h>


void fun(int *p)
{
  printf("\n in fun befre - %p", p);
  int q = 10;
  p = &q;
  printf("\n in fun - %p", p);

}

int main()
{
  int r = 20;
  int *p = &r;
  printf("\nbefore  - %p", p);
  fun(p);
  printf("\n%p", p);

}