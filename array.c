#include<stdio.h>
#include<string.h>

void insert(int *a,int*i)
{
    printf("\n Enter The Elements %d  =  ",(*i)+1);
    scanf("%d",&(*a));
}


void display(int *a)
{
    printf("\n The Elements %d  =  ",*a);
}


int main()
{
    int a[20],i,n=0,flag=0,c,x;
    char in ='y';

    while(in=='y')
    {

        printf("\n What You Want  \n  1.INSERTION \n  2.DELETION \n  3.SEARCHING \n  4.DISPLAY   = ");
        scanf("%d",&c);

        if(c==1)
        {
            printf("\n Enter How Many  : ");
            scanf("%d",&n);


            for(i=0;i<n;i++)
            {
                insert(&a[i] ,&i);
            }
        }


        else if(c==2)
        {
            printf("\n Which Element");
            scanf("%d",&x);

            for(i=0;i<n-1;i++)
            {

                if(x==a[i])
                {
                    flag=1;
                    a[i]=a[i+1];
                }
            }
            if(flag==0)
                printf("NOOO");

            flag=0;


        }


        else if(c==3)
        {
            printf("\n Which Element  = ");
            scanf("%d",&x);

            for(i=0;i<n;i++)
            {
                if(x==a[i])
                {
                    flag=1;
                    printf("\n It Is In %d ",i+1);
                }
            }
            if(flag==0)
                printf("\n NOT FOUND");

            flag=0;
        }


        else if(c==4)
        {
            for(i=0;i<n;i++)
            {
                display(&a[i]);
            }
        }

    printf("\n Enter HWant Again  : ");
    getchar();
    scanf("%c",&in);

    }
}