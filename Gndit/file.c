#include <stdio.h>
int main() {
    FILE *fp;
    int id;
    char name[15];
    float salary;

    fp = fopen("family.txt","w");

    if(fp==NULL)
    {
        printf("\n File Does Not Exist");
        return 0;
    }

    printf("\n Enter Your Id : ");
    scanf("%d",&id);
    fprintf(fp,"ID = %d\n",id);

    printf("\n Enter Your name : ");
    scanf("%s",name);
    fprintf(fp,"Name = %s\n",name);

    printf("\n Enter Your salary : ");
    scanf("%f",&salary);
    fprintf(fp,"salary = %f\n",salary);


    fclose(fp);

    fp = fopen("family.txt" , "r");
    char s;

    while(!feof(fp))
    {
        s=fgetc(fp);

        printf( "%c" , s ) ;
    }
    fclose(fp);
    return 0;
}








/*do {
         c = getc(fp);
         putchar(c);
    }
    while(c != EOF);*/

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("abd.txt" , "rb");
    char s[150];

    while(!feof(fp))
    {
        fgets(s, 150, fp);

        puts(s);
    }

    fclose(fp);
}*/