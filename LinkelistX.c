#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void display(PNODE first)
{
    while (first != NULL)
    {
        printf("|%d|->",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCnt = 0;

    while (first != NULL)
    {
        iCnt++;
        first = first->next;
    }
    return iCnt;

}

void InsertFirst(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
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

void InsertLast(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

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
        
    }

}

void InsertAtPos(PPNODE first,int iNo,int iPos)
{
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = NULL;

    if((iPos < 1) || (iPos > (Count(*first) + 1)))
    {
        printf("Position error");
    }

    if(iPos == 1)
    {
        InsertFirst(first,iNo);
    }
    else if(iPos == (Count(*first) + 1))
    {
        InsertLast(first,iNo);
    }
    else
    {
        temp = (*first);
        for(i = 1 ; i< iPos -1 ; i++)
        {
            temp = temp->next;
        }

        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNo;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next = newn;
    }

}

void DeleteFirst(PPNODE first)
{
    PNODE newn = NULL;

    if((*first) == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        newn = (*first);
        free(newn);
        (*first) = NULL;
    }
    else
    {
        newn = (*first);
        (*first) = newn->next;
        free(newn);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    if((*first) == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        newn = (*first);
        free(newn);
        (*first) = NULL;
    }
    else
    {
        temp = (*first);
    
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        
        newn = temp->next;
        temp->next = NULL;
        free(newn);
        
    }
}

void DeleteAtPos(PPNODE first,int iPos)
{
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = NULL;

    if((iPos < 1) || (iPos > (Count(*first))))
    {
        printf("Position error");
    }

    if(iPos == 1)
    {
        DeleteFirst(first);
    }
    else if(iPos == (Count(*first)))
    {
        DeleteLast(first);
    }
    else
    {
        temp = (*first);
        for(i = 1 ; i< iPos -1 ; i++)
        {
            temp = temp->next;
        }

        newn = temp->next;
        temp->next = temp->next->next;
        free(newn);
    }

}


int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    display(head);
    iRet  = Count(head);
    printf("Number of Node in Linkelist : %d\n",iRet);

    InsertLast(&head,121);
    InsertLast(&head,151);

    display(head);
    iRet  = Count(head);
    printf("Number of Node in Linkelist : %d\n",iRet);

    DeleteFirst(&head);

    display(head);
    iRet  = Count(head);
    printf("Number of Node in Linkelist : %d\n",iRet);

    DeleteLast(&head);

    display(head);
    iRet  = Count(head);
    printf("Number of Node in Linkelist : %d\n",iRet);


    InsertAtPos(&head,31,3);

    display(head);
    iRet  = Count(head);
    printf("Number of Node in Linkelist : %d\n",iRet);

    DeleteAtPos(&head,3);

    display(head);
    iRet  = Count(head);
    printf("Number of Node in Linkelist : %d\n",iRet);

    return 0;
}
