#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int marks;
    char name[10];
    struct node *next;
    struct node *prev;

};

void insert(struct node**head,struct node**tail)
{
    struct node*temp=(struct node*) malloc(sizeof(struct node)),*t=*head,*p=*tail,*t2=NULL;
    printf("\n \n Enter The Name Of The New Student : ");
    scanf("%s",temp->name);
    printf("\n \n Enter The marks Of The New Student = ");
    scanf("%d",&temp->marks);


    if (temp->marks>=t->marks)
    {
        temp->next=t;
        t->prev=temp;
        temp->prev=NULL;
        *head=temp;
    }



    else if(t->marks>temp->marks && p->marks<temp->marks)

    {

        while(t->marks>temp->marks)
        {
            t=t->next;
        }
        t2=t;
        t=t->prev;

        if(t->marks>temp->marks)
        {
            temp->next=t->next;
            t->next=temp;
            t2->prev=temp;
            temp->prev=t;
        }
    }



    else if(temp->marks<=t->marks)
    {
        p->next=temp;
        temp->prev=p;
        temp->next=NULL;
        *tail=temp;
    }

}



void go(struct node**head,struct node**tail)
{
    struct node *t=*head,*p=NULL,*n=NULL;

    char nam[10];
    printf("Enter Student Name = ");
    scanf("%s",nam);

    while(t != NULL)
    {
        if(strcmp(nam,t->name)==0)
        {
            printf("\n yo");
            if(t->prev==NULL)
            {
                *head=(*head)->next;
                n=t->next;
                n->prev=t->prev;
            }


            else if(t->next==NULL)
            {
                *tail=(*tail)->prev;

                p=t->prev;
                p->next=t->next;
            }


            else
            {
                printf("\n qwerto");
                p=t->next;
                n=t->prev;

                n->next=t->next;
                p->prev=p->prev;
            }


        }
        else
        {
            printf("\n no");
        }

        t=t->next;
    }

}

void printList(struct node **n)
{
    int i=1;
    struct node*p=*n;
    while (p != NULL)
    {
        printf("\n %d. %s = %d ",i,p->name ,p->marks);
        p = p->next;
        i++;
    }
}



int main()
{
    int n;//,m;
    char input;
    struct node*head=(struct node*) malloc(sizeof(struct node)),*tail=head;

    printf("\n Enter The Number Of Students  = ");
    scanf("%d",&n);

    printf("\n Enter The Name Of The Student : ");
    scanf("%s",head->name);
    printf("\n Enter The marks Of The Student = ");
    scanf("%d",&head->marks);

    head->next=NULL;
    head->prev=NULL;

    for(int i=1; i<n; i++)
    {
    insert(&head,&tail);
    }

   // printf("\n Enter The What You Want \n  1.REMOVE A STUDENT \n  2.CHANGE MARKS OF A STUDENT  = ");
    //canf("%d",m);


    //if(m==1)
    //{
        printf("\n If You Want Remove Any Student Press 'Y' Or 'y' : ");
        getchar();
        scanf("%c",&input);

        while(input=='y'||input=='Y')
        {
            go(&head,&tail);

            printf("\n If You Want Remove Again Any Student Press 'Y' Or 'y' : ");
            scanf("%c",&input);

        }
   // }


  /*  else if(m==2)
    {
        printf("\n If You Want Change Any Student Press 'Y' Or 'y' : ");
        getchar();
        scanf("%c",&input);

        while(input=='y'||input=='Y')
        {
            change(&head,&tail);

            printf("\n If You Want Change Again Any Student Press 'Y' Or 'y' : ");
            getchar();
            scanf("%c",&input);
        }
    }


    else*/
        printList(&head);

}
