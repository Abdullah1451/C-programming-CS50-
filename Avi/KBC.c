#include<stdio.h>
int main()
{
    char a;
    printf(" Let's Play Kaun Banega Crorepati \n  our first question for 1 crore is \n Q. Anas ki shaadi m kitne log baarat m jaenge \n  a. 20 \n  b. 50 \n  c. 80 \n  d. 108 \n \n   your answer  =  ");
    scanf("  \n %c",&a);

            if (a=='c')
                printf("you win 1 crore in your dreams");

            else if(a=='a')
                printf("sorry you lose 1 crore in real");

           else if(a=='b')
                printf("sorry you lose 1 crore in real");

            else if (a=='d')
                printf("sorry you lose 1 crore in real");

            else
                printf("there is no option like that you have typed so you win a fart of abdullah that is very healthy this fart comes one tme in four years  ");
}