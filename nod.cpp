#include<stdio.h>
#include<stdlib.h>
#include<iostream>
int Count=1;

struct node
{
    int a;
    struct node *next;
};




void insertAtBeg(struct node**head)
{
    struct node *temp=new node;
    printf("\n Enter The Number : ");
    scanf("%d",&temp->a);
                                                                        //printf("\n head in j = %p ",&head);
                                                                        //printf("\n head in add = %p ",head);
                                                                        //printf("\n head in j = %p ",*head);
    temp->next=*head;
    *head=temp;
    Count++;
                                                                        //printf("\n head in j = %p ",&head);
                                                                        //printf("\n head in add = %p ",head);
                                                                        //printf("\n head in j = %p ",*head);
                                                                        //printf("\n count = %d",Count);
}








void insertAtEnd(struct node**tail)
{
    struct node *temp=new node,*t=*tail;
    printf("\n Enter The Number : ");
    scanf("%d",&temp->a);
    temp->next=NULL;
    (*tail)->next=temp;
    *tail=temp;
    Count++;
    printf("\n count = %d",Count);
}








/*void insertAt(struct node**head,int w)
{
    struct node *temp=(struct node*) malloc(sizeof(struct node)),*t=*head;
    printf("\n Enter The Number : ");
    scanf("%d",&temp->a);
    temp->next=NULL;

    for(int i=0; i<w; i++)
    {

        if(i==w-2)
        {
             printf("ytwehf2gj");
            temp->next=t->next;
            t->next=temp;
            break;
        }
        t=t->next;
    }
    Count++;
    printf("\n count = %d",Count);
}*/








void printList(struct node **n)
{
    struct node*p=*n;
  while (p != NULL)
  {
     printf("\n %d ", p->a);
     p = p->next;
  }
}







void removeBeg(struct node**head)
{
    *head=(*head)->next;
    Count--;
    printf("\n count = %d",Count);
}







void removeEnd(struct node**tail,struct node**head)
{
    struct node*t=*head;
    for(int i=1; i<Count-1; i++)
    {
        t=t->next;
    }
    t->next=NULL;
    *tail=t;

    Count--;
    printf("\n count = %d",Count);
}







//void removeMid(struct node**head,int w)
/*{
    struct node *t=*head;

    printf("1");
    for(int i=0; i<w; i++)
    {
        printf("2");

        if(i==w-1)
        {
            printf("3");
            t->next=(*head)->next;
            break;
        }
        t=t->next;
    }
    Count--;
    printf("\n count = %d",Count);
}

*/





int main()
{
    char input='y';
    int m,w;
    struct node*head=new node ,*tail=head;
    printf("\n Enter A Number : ");
    scanf("%d",&head->a);
    head->next=NULL;

    printf("\n head add = %p ",&head);
    printf("\n head in add = %p ",head);

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


        else if(m==4)
        {
            if(Count==1)
            {
                printf("\n Cannot Possibl");
            }
            else
                removeBeg(&head);
        }


        else if(m==5)
        {
            if(Count==1)
            {
                printf("\n Cannot Possible");
            }
            else
            {
                removeEnd(&tail,&head);
            }
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

