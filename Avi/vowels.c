#include<stdio.h>

int main()
{
    char name[10];
    printf("Enter Your Name\n");
    scanf("%s",name);

     for(int i=0; i<10; i++)
        {
            if(name[i] !='A' && name[i] != 'a' && name[i]!='E' && name[i]!='e' && name[i]!='I' && name[i]!='i' && name[i]!='O' && name[i]!='o' && name[i]!='U' && name[i]!='u')
                  printf("%c",name[i]);

        }
}