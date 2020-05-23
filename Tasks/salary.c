#include<stdio.h>
int main()

{
    char name[30];
    int salary,percent1,percent2;
    float dearnessAllowance,houseRent;
    
    printf("what is your name\n");
              scanf("%s",name);
              
    printf("how much is your salary of one month\n");
              scanf("%d",&salary);
    
    printf("how much percent of your salary goes to dearness allowance\n");
               scanf("%d",&percent1);
    
    printf("how much percent of your salary goes to house rent\n");
               scanf("%d",&percent2);
    
    dearnessAllowance=salary*percent1/100;
    houseRent=salary*percent2/100;
    
    printf("hello %s\n %d percent of your salary goes to dearness allowance is %f and %d percent of your salary goes to house rent is %f",name,percent1,dearnessAllowance,percent2,houseRent);
    
}