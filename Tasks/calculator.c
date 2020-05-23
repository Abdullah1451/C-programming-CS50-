#include<stdio.h>
int main()

{
    
   float firstNumber,secondNumber;
    char operation;
    
    printf("You have to enter any two numbers \n Enter first number \n a.");
    
    scanf("%f",&firstNumber);
    
    printf("Enter second number \n b.");
    
    scanf("%f",&secondNumber);
    
     printf("What do you want to do with these numbers\n division \n multiplication \n addition \n subtraction\n");
     
     
 getchar(); // ho to gya tha kya kr rha h
   
    
    scanf("%c",&operation);
   
    
        if     (operation=='/')
                                printf("result is:%f",firstNumber/secondNumber);
                      
        else if (operation=='*')
                                printf("result is: %f",firstNumber*secondNumber);
               
        else if (operation=='+')
                                printf("result is: %f",firstNumber+secondNumber);
               
        else if (operation=='-')
                                printf("result is: %f",firstNumber-secondNumber);
             
        else 
                                printf("you are donkey");
         
}
