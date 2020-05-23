#include<stdio.h>


void reverse(int *a, int *b);
void rev(int a , int b)
{
   printf(" a is %p and b s %p", &a,&b );
}



int main()
{
    //char name[10];
    int a=89;
    int b=98;

    reverse(&a,&b);
    printf(" a is %p and b s %p", &a,&b );
}

void reverse(int *a, int *b)
{
  int temp= 0;
  temp =*a ;
  *a = *b;
  *b=temp;
  printf(" a is %p and b s %p", a,b );


}