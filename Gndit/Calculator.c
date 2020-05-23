#include<stdio.h>
int main()

{
    double x,y,s;
    char choice;
    printf("Enter What Do You Want To Do?\n1. Press '+' For Addition' \n2. Press '-'  For Substraction \n3. Press '*' For multiplication \n4. Press '/' For Division \n");
    scanf("%c",&choice);

    switch(choice)
    {
        case '+':
        printf("Enter Two Number\n");
        scanf("%lf %lf",&x,&y);
        s=x+y;
        printf(" %lf + %lf = %lf",x,y,s);
        break;

        case '-':
        printf("Enter Two Number\n");
        scanf("%lf %lf",&x,&y);
        s=x-y;
        printf(" %lf - %lf = %lf",x,y,s);
        break;

        case '*':
        printf("Enter Two Number\n");
        scanf("%lf %lf",&x,&y);
        s=x*y;
        printf(" %lf X %lf = %lf",x,y,s);
        break;

        case '/':
        printf("Enter Two Number\n");
        scanf("%lf %lf",&x,&y);
        s=x/y;
        printf(" %lf / %lf = %lf",x,y,s);
        break;

        default :
        printf("Invalid input");

    }
}