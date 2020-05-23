#include<stdio.h>
int main()
{
  float maths,english,hindi,science,economics,aggregateMarks,percentage;
   char name[30];
printf("What is your name\n");
       scanf("%s",name);

printf("\nwhat is your marks of five subjects out of 100\n maths=");
       scanf("%f",&maths);
       
printf("\n english=");
       scanf("%f",&english);
       
printf("\n hindi=");
      scanf("%f",&hindi);
      
printf("\n science=");//i m going to sleep i m very tired today any thing you have to say then open instructions ok
      scanf("%f",&science);
      
printf("\n economics=");
      scanf("%f",&economics);
      
aggregateMarks=maths+english+hindi+science+economics;

percentage=aggregateMarks/500*100;

if (maths>=101)
    printf("you are not applicable");
    
else if (english>=101)
    printf("you are not applicable");
    
else if (hindi>=101)
    printf("you are not applicable");
    
else if (science>=101)
    printf("you are not applicable");
    
else if (economics>=101)
    printf("you are not applicable");

else    
printf("\n\n Hello %s\n your aggregate marks out of 500 is %f and your percentage is %f %%",name,aggregateMarks,percentage);
      
}

// good work