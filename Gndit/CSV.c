#include<stdio.h>
#include<string.h>

int main()
{
    char Name[50],FatherName[50],MotherName[50],Address[50],Phone[15];
    FILE *file=NULL;
    //char repeat='y';
   /* char newFile='n';

    printf("Want to create a new File Y|N :  ");
    scanf("%c", &newFile);

    if(newFile == 'y'|| newFile=='Y')
    {
        printf("\n Enter name of the file :");
        char *fileName=NULL;
        scanf("%s", fileName);
        getchar();
       // int len = strlen(fileName);
        //fileName[len] = ".csv";
        //fileName[len + 1] = '\0';
        file = fopen(fileName,"w+");
    }*/
        file=fopen("aAnewTest.csv","w+");

   // while (repeat=='y'||repeat=='Y')
    //{

        printf("\n Enter Your Name : ");
        fgets(Name,50,stdin);

        //printf("your name is= %s ",Name);


        printf("\n Enter Your Father's Name ");
        fgets(FatherName,50,stdin);

        //printf("\n Enter Your Mother's Name ");

        //fgets(MotherName,50,stdin);


        //printf("\n Enter Your Address ");
        //fgets(Address,50,stdin);

	    //printf("address is =  %s",Address);

        //printf("\n Enter Your Phone Number ");
        //scanf("%s",Phone);

        for(int i =0;i<strlen(Name);i++)
        {
            printf("%d", Name[i]);
        }
        if (file == NULL)
        {
            printf("File does not exists \n");
            return 0;
        }

        fprintf(file,"%s ,%s ,%s ,%s,%s",Name,MotherName,FatherName,Address,Phone);
       // fprintf(file,"%s",Name);
       // printf("\n Enter Again 'Y' OR 'N'");
        //scanf("%c",&repeat);

    //}
    fclose(file);

}