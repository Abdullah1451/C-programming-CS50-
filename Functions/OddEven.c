#include<stdio.h>
#include<stdbool.h>

//int i; // global variable

bool isOdd(); // declaration


int main()
{
    int i=65; // declaration with definition // local variable


    bool k = isOdd(i);   // function call -  parametrized

    if(k)
        printf("%d is Odd Number",i);
    else
        printf("%d is Even Number",i);
}


bool isOdd(int i) // definition  // parametrized function
{
    if(i%2==0)
        return false;
    else
        return true;

}