#include<stdio.h>

int main()
{
    char name[20],fatherName[20],motherName[20];

    printf("enter your name\n");

    scanf("%s",name);

    printf("\nenter your father name\n");

    scanf("%s",fatherName);

    printf("\nenter your mother name\n");

    scanf("%s",motherName);

    printf("\n Hello %s your father name is %s and your mother name is %s \n",name,fatherName,motherName);
    FILE *hhhh;
    hhhh=fopen("info.txt","w+");

    fprintf(hhhh,"Your Name=%s \n Mother Name=%s\n  Father Name=%s",name,motherName,fatherName);

    fclose(hhh);

}