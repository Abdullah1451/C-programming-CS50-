#include<stdio.h>
int main()
{
    float mark[5],sum=0,percentage,cgpa;


    for(int i=0,j=1; i<5 && j<=5; i++,j++)
    {
        printf("\nGive Marks Of %d Subject Out Of 100  ==  ",j);
        scanf("%f",&mark[i]);

            if(mark[i]>101)
            {
                printf("Marks Out Of 100  \n");
                printf("Enter Once Again  == ");
                scanf("%f",&mark[i]);
            }

        else
                sum=mark[i]+sum;

    }


    for(int i=0,j=1; i<5 && j<=5; i++,j++)
    {
               if(mark[i]>90 && mark[i]<=100)
                printf("\n\nYour Grade Of %d Subject == A",j);

        else if(mark[i]>80 && mark[i]<=90)
                 printf("\n\nYour Grade Of %d Subject == B",j);

        else if(mark[i]>70 && mark[i]<=80)
                 printf("\n\nYour Grade Of %d Subject == C",j);

        else if (mark[i]>60 && mark[i]<=70)
                 printf("\n\nYour Grade Of %d Subject == D",j);

        else if(mark[i]>50 && mark[i]<=60)
                 printf("\n\nYour Grade Of %d Subject == E",j);

        else if(mark[i]>40 && mark[i]<=50)
                 printf("\n\nYour Grade Of %d Subject == F",j);

        else if (mark[i]>30 && mark[i]<=40)
                 printf("\n\nYour Grade Of %d Subject == G",j);

        else if(mark[i]>20 && mark[i]<=30)
                 printf("\n\nYour Grade Of %d Subject == H",j);

        else if(mark[i]>10 && mark[i]<=20)
                 printf("\n\nYour Grade Of %d Subject == I",j);

        else
                 printf("\n\nYour Grade Of %d Subject == J",j);
    }


        //    printf(" \nsum  === %f ",sum);

            percentage=sum/500*100;

            cgpa=percentage/9.5;

            printf("\n\nYour Percentage  =  %f ",percentage);


    if(cgpa>=10)
        printf("\n\nYour C.G.P.A.  =  10");
    else
        printf("\n\nYour C.G.P.A.  = %f",cgpa);



}