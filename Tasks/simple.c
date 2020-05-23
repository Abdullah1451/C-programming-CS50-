#include<stdio.h>

int main()

{
    

    
    int rate,amount,numberOfYears ;
    
    float simpleInterest;
    
    printf("Enter the amount\n");
    
    
    scanf("%d", &amount);
    
    printf("\nEnter the rate\n");
    
    
    scanf("%d",&rate);
    
    printf("\nEnter the numberOfYears\n");
    
    scanf("%d",&numberOfYears);
    
    float mul = (rate*amount*numberOfYears);
    
    simpleInterest = mul/100;
    
    //simple intrest for the amount 1000 at the rate of 8 percent for 4 year is 320
    
    printf("simple Interest of the amount %d at the rate %d percent for the years %d is %f\n", amount, rate , numberOfYears, simpleInterest);
    
}
