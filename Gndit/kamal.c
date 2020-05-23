#include<stdio.h>
#define INTEL
int main()
{
  #ifdef INTEL
     printf("yo yoy yoy yoy bjf");
    #else
    printf("qwerty");
    #endif
}
/*
    int students[5],sum=0;

    for(int i=0;i<5;i++)
    {
        printf("\n enter five student[%d] marks \n",i);
        scanf("%d",&students[i]);

        sum+=students[i];

    }
    printf("average of 5 students = %f",(float)sum/5);

}*/