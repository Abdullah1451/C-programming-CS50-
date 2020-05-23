#include<stdio.h>
#include<string.h>

int main()
{
    int num= 0;

    for (int count=0; count<=40; count++)
    {
        if((count%2)==0)
        continue;

        printf(" %d",count);


    }










    printf("how many bits");
    scanf(" %d",&num);
    printf("\n");

    int myIncrementor=1,myMultiplier=1,finalValue=1;

    while(myIncrementor<num)
    {
        myMultiplier*=2;
        finalValue+=myMultiplier;
        myIncrementor++;
    }
    if((num==0)||(num==1))
    printf("top value 1: %d \n",num);

    else
    printf("top value : %d \n",finalValue);























    //printf("i bought %s products ",(num>5)?"many" :"one");








































   /* int age =18;

    char*legalAge=(age>21)?"true" : "false";

    printf("is customer age is legal ? %s ",legalAge);*/































   /* int num=1;

    printf("++%d : %d\n\n",num,(++num));
    num=1;
    printf("%d++ : %d\n\n",num,num++);*/




}




















    /*char myName[]="Derek Banas";
    strcpy(myName,"Abdullah Khan");
    printf("my name is %s \n",myName);*/
