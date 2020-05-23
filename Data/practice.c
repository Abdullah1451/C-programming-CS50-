#include <stdio.h>
#include<stdlib.h>

struct node
{
    int a;
    struct node*next;
};

int main()
{
    int nx;
    struct node*head=(struct node*) malloc(sizeof(struct node));
    printf("Enter The Number : ");
    scanf("%d",&head->a);
    head->next=NULL;
    printf("\nValue Of A %d and NEXT %p ",head->a,head->next);
    printf("Enter Your Choice : \n");
    scanf("%d",&nx);
    if(nx==1)
    {
        struct node*temp=(struct node*) malloc(sizeof(struct node));
        printf("Enter the number : ");
        scanf("%d",&temp->a);
        temp->next=head;
        head=temp;
    }



}
