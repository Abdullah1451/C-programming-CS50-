#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    float s,area;
    printf("enter the value of a b c \n");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=(sqrt)(s*(s-a)*(s-b)*(s-c));
    printf("\n the area is  ===  %f unit",area);

}