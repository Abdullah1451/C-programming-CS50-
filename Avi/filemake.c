#include<stdio.h>

 int main()

{
FILE *fp;

fp=fopen("Tasks/MyInfo.txt","w+");

fprintf(fp,"this is tw=ext");

fclose(fp);
 

}