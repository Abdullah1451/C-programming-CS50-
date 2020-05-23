#include<stdio.h>
#include<stdlib.h>

struct node
{
    char a;
    struct node *next;
};



void pop(struct node**top)
{
    struct node*t=*top;
    *top=(*top)->next;
    free(t);
}

void push(struct node**top, char data)
{

    struct node* newNode = (struct node*) malloc(sizeof(struct node));



    newNode->a  = data;

    newNode->next = *top;

    *top = newNode;
}


void matching(char str[],int n)
{
    struct node*top=NULL;

    for(int i=0; i<n; i++)
    {
        if(str[i]=='(' || str[i]=='[' || str[i]=='{')
        {
            push(&top,str[i]);
        }
        else if(str[i]==')' || str[i]==']' || str[i]=='}')
        {
            if (top->a == '(' && str[i] == ')')
            {
                pop(&top);
            }
            else if (top->a == '{' && str[i] == '}')
            {
                pop(&top);
            }
            else if (top->a == '[' && str[i] == ']')
            {
                pop(&top);
            }
        }
    }

    if(top==NULL)
    {
        printf("\n Balanced ");
    }
    else if(top!=NULL)
    {
        printf("\n Not Balanced ");
    }
}



int main()
{
    char str[100] = "{()[}";
    int n=sizeof(str)/sizeof(str[0]);
    matching(str,n);
}