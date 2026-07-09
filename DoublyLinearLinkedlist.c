#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{
    printf("NULL <=> ");
    while (first)
    {
        printf("| %d | <=> ",first->data);
        first = first->next;
    }
    printf(" NULL\n");
}


int Count(PNODE first)
{
    int iCnt = 0;
    while (first)
    {
        first = first->next;
        iCnt++;
    }

    return iCnt;
}

void InsertFirst(PPNODE first,int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if((*first) == NULL)
    {
        (*first) = newn;
    }
    else
    {
        newn->next = (*first);
        (*first)->prev = newn;
        (*first) = newn;
    }
}

void InsertLast(PPNODE first,int iNo)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if((*first) == NULL)
    {
        (*first) = newn;
    }
    else
    {
        temp = (*first);

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }
    

}

void InsertAtPos(PPNODE first,int iNo,int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCount = 0;
    int i = 0;

    iCount = Count((*first));

    if(iPos == 1)
    {
        InsertFirst(first,iNo);
    }
    else if(iPos == (iCount + 1))
    {
        InsertLast(first,iNo);
    }
    else
    {
        temp = (*first);

        for(i = 1 ; i < iPos -1; i++)
        {
            temp = temp->next;
        }

        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

    }
    
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if((*first) == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        (*first) = NULL;
    }

    else
    {
        temp = (*first);
        (*first) = (*first)->next;
        (*first)->prev = NULL;
        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if((*first) == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        (*first) = NULL;
    }

    else
    {
        temp = (*first);

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
        
    }
}

void DeleteAtPos(PPNODE first,int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCount = 0;
    int i = 0;

    iCount = Count((*first));

    if(iPos == 1)
    {
        DeleteFirst(first);
    }
    else if(iPos == (iCount))
    {
        DeleteLast(first);
    }
    else
    {
        temp = (*first);

        for(i = 1 ; i < iPos -1; i++)
        {
            temp = temp->next;
        }

        newn = temp->next;
        temp->next = temp->next->next;
        temp->next->prev = temp;
        free(newn);

    }
}


int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,151);
    InsertFirst(&head,111);
    InsertFirst(&head,101);
    InsertFirst(&head,51);

    Display(head);
    iRet = Count(head);
    printf("Number of node are : %d\n",iRet);

    InsertLast(&head,201);

    Display(head);
    iRet = Count(head);
    printf("Number of node are : %d\n",iRet);


    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of node are : %d\n",iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of node are : %d\n",iRet);

    InsertAtPos(&head,100,3);

    Display(head);
    iRet = Count(head);
    printf("Number of node are : %d\n",iRet);

    DeleteAtPos(&head   ,3);

    Display(head);
    iRet = Count(head);
    printf("Number of node are : %d\n",iRet);
    return 0;
}