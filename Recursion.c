#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;  // 8 byte
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)       // call by value
{
    if(first != NULL)
    {
        Display(first->next);
        printf("| %d | -> ",first->data);   
    }
    return;
}

void InsertFirst(PPNODE first,int iNo)  // call by refrence
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if((*first) == NULL)   
    {
        (*first) = newn;
    }
    else
    {
        newn->next = (*first);
        (*first) = newn;
    }
}


int main()
{
    PNODE head = NULL;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
    InsertFirst(&head,1);

    Display(head);
    return 0;
}
