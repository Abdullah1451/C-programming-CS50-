#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};




void InsertBeg(struct node**head)// yha pr hmne pointer to pointer liya h  kyuki hmne address of head pass kiya h
{
    struct node *newnode= malloc(sizeof(struct node));
    printf("Enter The Data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    newnode->next=*head;
    *head =newnode;
}



void InsertEnd(struct node**tail)
{
    struct node *newnode=(struct node*) malloc(sizeof(struct node));
    printf("\n Enter The Number : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    (*tail)->next=newnode;
    *tail=newnode;
}




void printList(struct node **n)
{
    struct node*p=*n;
    while (p != NULL)
    {
        printf("\n %d ", p->a);
        p = p->next;
    }
}





int main() //tu ek baar pura bnna ke msg krrr....// pura to bna pda h//tere ko jo chnges krne h usse krke mtlb//
{
    char ch='y';
    int m=0;
    struct node*head=NULL,*tail;

    struct node *newnode= malloc(sizeof(struct node));
    printf("Enter The Data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=head;
    }

    while(ch=='y'|| ch=='Y')
    {
        printf("\n What You Want To Do \n  1.Insert At Beginning \n  2.Insert At End  :: ");
        scanf("%d",&m);
        if(m==1)
        {
            InsertBeg(&head);
        }
        else if(m==2)
        {
            InsertEnd(&tail);
        }

        printf("\n Want To Insert Again Press Y or y : ");
        getchar();
        scanf("%s",&ch);
    }

    printList(&head);
}

