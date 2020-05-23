#include<stdio.h>
#include<stdbool.h>

//int i,j; // global variable

void swap(); // declaration


int main()
{

    int i=65, j=66; // declaration with definition // local variable



    swap(&i,&j);   // function call -  parametrized


        printf(" i = %d is Odd Number",i);

        printf("\n j =%d is Even Number",j);
}


void swap(int *i, int *j) // definition  // parametrized function
{

    int temp = *i ;
    *i=*j;
    *j=temp;
}