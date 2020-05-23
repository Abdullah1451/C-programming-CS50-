#include<stdio.h>
int main()

{
int remainder;
long number,reverse=0,num;
char h='y';
    while(h=='y' || h=='Y')
        {
            number=0;
            reverse = 0;
            num=0;


            printf("Enter any number to check the no. is palindrome or not  = ");
              scanf("%ld",&number);
              num=number;

                    while(number!=0)
                         {
                              remainder=number%10;
                              reverse=reverse*10+remainder;
                               number/=10;

                          }

                               if(num==reverse)
                                   printf("\nthe number %ld is palindrome number\n",num);

                                else
                                    printf("\nthe number %ld is not a palindrome number\n",num);

                                              printf("\ncheck any number agin?  'Y'| 'N' \n ");
                                              getchar();
                                              scanf("%c",&h);
        }
}