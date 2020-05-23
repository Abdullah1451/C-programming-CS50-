#include<stdio.h>
#include<stdlib.h>

struct node
{
    int a;
    struct node *left;
    struct node *right;

};

void deletion(struct node**root)
{

    int flag=0,val=0;
    struct node*t=*root,*n=NULL;
    printf("\n Enter The Data :");
    scanf("%d",&val);
    while(flag==0)
    {
        if(val==t->a)
        {
            free(t);
        }
        else if(val<=t->a)
        {
            if(val==t->left->a)
            {
                n=t->left;
                t->left=NULL;
                free(n);
                flag=1;
            }
            t=t->left;
        }
        else if(val>=t->a)
        {
            if(val==t->right->a)
            {
                n=t->right;
                t->right=NULL;
                free(n);
                flag=1;
            }
            t=t->right;
        }
    }
}



void insert(struct node**root,int val)
{
    int flag=0;
    struct node*t=*root;
    while(flag==0)
    {
       if(val<=t->a)
        {
            if(t->left==NULL)
            {
                struct node*temp=(struct node*)malloc(sizeof(struct node));
                temp->a=val;
                temp->left=NULL;
                temp->right=NULL;
                t->left=temp;
                flag=1;
            }
            t=t->left;
        }
        else if(val>=t->a)
        {
            if(t->right==NULL)
            {
                struct node*temp=(struct node*)malloc(sizeof(struct node));
                temp->a=val;
                temp->left=NULL;
                temp->right=NULL;
                t->right=temp;
                flag=1;
            }
            t=t->right;
        }
    }

}



void preorder(struct node**t)
{
    if(*t==NULL)
    {
        return;
    }

    printf("%d  ",(*t)->a);
    preorder(&(*t)->left);
    preorder(&(*t)->right);
}





void inorder(struct node**t)
{
    if(*t==NULL)
    {
        return;
    }
    inorder(&(*t)->left);

    printf("%d  ",(*t)->a);

    inorder(&(*t)->right);
}


void postorder(struct node**t)
{
    if(*t==NULL)
    {
        return;
    }
    postorder(&(*t)->left);

    postorder(&(*t)->right);

    printf("%d  ",(*t)->a);
}




int main()
{
    struct node*root=(struct node*)malloc(sizeof(struct node));
    struct node*t=root;
    char input='y';
    int val,m=0;;

    printf("\n Enter The Data : ");
    scanf("%d",&root->a);
    root->left=NULL;
    root->right=NULL;

    while(input=='y'||input=='Y')
    {
        printf("\n What you want to do : \n 1.insertion \n 2.deletion  :: ");
        scanf("%d",&m);


        if(m==1)
        {
            printf("\n Enter The Data : ");
            scanf("%d",&val);
            insert(&root,val);
        }

        else if(m==2)
        {
            deletion(&root);
        }

        printf("\n You Want Do It Again For YES 'Y' or 'y' And For NO 'N' or 'n' :   ");
        getchar();
        scanf("%c",&input);
    }

    printf("\n\n   ");
    preorder(&t);

    printf("\n\n   ");
    inorder(&t);

    printf("\n\n   ");
    postorder(&t);
}








