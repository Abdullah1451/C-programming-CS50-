#include<stdio.h>
//int i; // global variable

float sum(); // declaration


int main()
{
    int i=65; // declaration with definition // local variable

    printf("%d",i++);

    char k = sum(i);   // function call -  parametrized

    //int j = sum();  // non parametrized function call

    printf("this is me k is %c ", k);

}


float sum(int i) // definition  // parametrized function
{
    printf("\n in the sum method-%d \n",i++);
    return i;

}