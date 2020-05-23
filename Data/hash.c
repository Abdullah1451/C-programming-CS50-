#include<stdio.h>
#include<stdlib.h>

int Count=1;


struct node
{
    int roll;
    char name[20];
    struct node *next;
};




void insertAtEnd(struct node**head)
{
    struct node *temp=(struct node*) malloc(sizeof(struct node)),*t=*head;

    printf("\n Enter Name : ");
    scanf("%s",temp->name);

    printf("\n Enter Roll No. = ");
    getchar();
    scanf("%d",&temp->roll);

    temp->next=NULL;

    while(t->next!=NULL)
    {
        t=t->next;
    }

    t->next=temp;
}



void printList(struct node **n)
{
    struct node*p=*n;

    while (p != NULL)
    {
        printf("\n    ->%s  = %d ", p->name,p->roll);
        p = p->next;
    }
}




int main()
{
    int c=1;
    char input ='y';
    struct node*head[12];
    for(int i=0; i<12; i++)
    {
        head[i]=NULL;
    }

    struct node*temp=(struct node*) malloc(sizeof(struct node));

    while(input=='y' || input=='Y')
    {
        printf("\n Enter Class  = ");
        scanf("%d",&c);


        if( head[c-1]==NULL)
        {
            printf("\n Enter Name  : ");
            scanf("%s",temp->name);

            printf("\n Enter Roll No. = ");
            scanf("%d",&temp->roll);

            temp->next =NULL;

            head[c-1]=temp;
        }

        else if(head[c-1]!=NULL)
        {
            insertAtEnd(&head[c-1]);
        }

        printf("\n Enter Again Press Y  ;  ");
        getchar();
        scanf("%c",&input);
    }
    for(int i=0; i<12; i++)
    {
        printf("\n\n\n CLASS  %d ", i+1);
        printList(&head[i]);
    }
}