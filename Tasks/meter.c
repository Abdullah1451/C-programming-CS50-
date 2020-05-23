#include<stdio.h>
int main()
{
   float kiloMeter[30],meter,centiMeter,feet,inches;
  
    printf("Write the distance between two cities in Kilometers\n");
            scanf("%f",&kiloMeter);

   meter=kiloMeter*1000;
   centiMeter=kiloMeter*10000;
   feet=kiloMeter*3280.84;
   inches=kiloMeter*39370.1;
   
   printf("\nmeter=%f\n",meter);
   printf("\ncentiMeter=%f\n",centiMeter);
   printf("\nfeet=%f\n",feet);
   printf("\ninches=%f\n",inches);
    
            
    
}