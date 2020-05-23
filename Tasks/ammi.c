#include<stdio.h>
#include <stdlib.h>

int main()


{

   char name[30],fatherName[30],motherName[30];

    printf("enter your name\n");

    scanf("%s",name);

    printf("\nenter your father Name \n");

    scanf("%s",fatherName);

    printf("\nenter your mother Name \n");

    scanf("%s",motherName);

    printf("\nHello %s your father is %s and your mother is %s \n",name,fatherName,motherName);

    FILE *file;

   file= fopen("abdullah.txt","w+");

    fprintf(file,"Name = %s \n Mothers Name - %s \nFathers Name - %s",name,motherName,fatherName);
    fclose(file);

    FILE *stream;
   	char *line = NULL;
   	size_t len = 0;
   	size_t read;

     stream = fopen("abdullah.txt","r+");
     if (stream == NULL)
    	exit(EXIT_FAILURE);

    read = getline(&line, &len, stream);
    while (read != -1) {
    	printf("Retrieved line of length %zu :\n", read);
    	printf("%s", line);
    }

    free(line);
    fclose(stream);
    exit(EXIT_SUCCESS);
}
