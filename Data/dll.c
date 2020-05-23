#include<stdio.h>
#include<stdlib.h>
int Count=1;

struct node
{
    int a;
    struct node *next;
    struct node *prev;

};


void insertAtBeg(struct node**head)
{
    struct node*temp=(struct node*) malloc(sizeof(struct node));
    printf("\n Enter A Number : ");
    scanf("%d",&temp->a);
    temp->next=*head;
    temp->prev=NULL;
    (*head)->prev=temp;
    *head=temp;
    Count++;
}


void insertAtEnd(struct node**tail)
{
    struct node*temp=(struct node*) malloc(sizeof(struct node));
    printf("\n Enter A Number : ");
    scanf("%d",&temp->a);

    temp->prev=*tail;
    temp->next=NULL;
    (*tail)->next=temp;
    *tail=temp;
    Count++;

}



void insertAt(struct node**head,int w)
{
    struct node*temp=(struct node*) malloc(sizeof(struct node)),*t=*head;
    printf("\n Enter A Number : ");
    scanf("%d",&temp->a);


    for(int i=0;i<w;i++)
    {
        if(i==w-2)
        {
            temp->next=t->next;
            temp->prev=t;
            t->next=temp;
            temp=temp->next;
            temp->prev=t->next;
            Count++;
            break;
        }

        t=t->next;
    }

}




void removeBeg(struct node**head)
{
     struct node*temp=*head;

     *head=(*head)->next;

     free(temp);
}




void printList(struct node **n)
{

    struct node*p=*n;
    while (p != NULL)
    {

        printf("\n %d ", p->a);
        printf("\n %d ", p->next->a);
        p = p->next;
    }
}




int main()
{
    char input='y';
    int m,w;
    struct node*head=(struct node*) malloc(sizeof(struct node)) ,*tail=head;
    printf("\n Enter A Number : ");
    scanf("%d",&head->a);
    head->next=NULL;


    while(input=='y'||input=='Y')
    {
        printf("\n What You Want To Do :\n  1.Insert At Beginning\n  2.Insert At End\n  3.Insert At Wherever\n  4.Removing From The Beginning\n  5.Removing From The End\n  6.Removing From The Wherever  = ");
        scanf("%d",&m);

        if(m==1)
        {
            insertAtBeg(&head);
        }


        else if (m==2)
        {
            insertAtEnd(&tail);
        }


        else if(m==3)
        {
            printf("\n Enter Which position You Want To Make New Node Between 1 And %d : ",Count);
            scanf("%d",&w);

            if(Count==1 || w==1)
            {
                insertAtBeg(&head);

            }


            if(w<1 || Count<w)
            {
                printf("\n SORRY ,Enter Again Which position You Want To Make New Node Between 1 And %d : ",Count);
                scanf("%d",&w);
            }

            if(w>1 && w<=Count)
            {
                insertAt(&head,w);
            }

        }

        else if(m==4)
        {
            removeBeg(&head);
        }
         else
        {
            printf("GET LOST");
        }
        printf("\n You Want Do It Again For YES 'Y' or 'y' And For NO 'N' or 'n' :   ");
        getchar();
        scanf("%c",&input);

    }

    printList(&head);


}
