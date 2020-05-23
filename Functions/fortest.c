/* Example to demonstrate use of reference operator in C programming. */
#include <stdio.h>
int main()
{
  int var = 5,re;
  re=var;
  printf("Value: %d\n", var);
  printf("Address: %d", re);  //Notice, the ampersand(&) before var.
  return 0;
}