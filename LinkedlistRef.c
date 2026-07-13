#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

void Display(struct node *first)
{
    while (first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    }

    printf("NULL\n");
}

int Count(struct node *first)
{
    int iCount = 0;
    while (first != NULL)
    {
        iCount++;
        first = first->next;
    }

    return iCount;
}

void InsertFirst(struct node **first, int iNo)
{
    struct node *newn = NULL;
    newn = (struct node *)malloc(sizeof(struct node));

    newn->data = iNo;
    newn->next = NULL;

    if ((*first) == NULL)
    {
        (*first) = newn;
    }
    else
    {
        newn->next = (*first);
        (*first) = newn;
    }
}

void InsertLast(struct node **first, int iNo)
{
    struct node *newn = NULL;
    newn = (struct node *)malloc(sizeof(struct node));

    newn->data = iNo;
    newn->next = NULL;

    if ((*first) == NULL)
    {
        (*first) = newn;
    }
    else
    {
        struct node *temp = NULL;
        temp = (*first);

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

void InsertAtPos(struct node **first, int iNo, int iPos)
{
    struct node *newn = NULL;
    struct node *temp = NULL;

    int iCount = Count((*first));
    int i = 0;

    if(iPos < 1 || (iPos > iCount + 1))
    {
        printf("Invalid Position\n");
        return;
    }

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

        newn = (struct node *)malloc(sizeof(struct node));

        newn->data = iNo;
        newn->next = NULL;

        for(i = 1 ; i < iPos - 1 ; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteFirst(struct node **first)
{
    struct node *temp = NULL;
    if ((*first) == NULL)
    {
        return;
    }
    else if ((*first)->next == NULL)
    {
        free(*first);
        (*first) == NULL;
    }
    else
    {
        temp = (*first);
        (*first) = (*first)->next;
        free(temp);
    }
}

void DeleteLast(struct node **first)
{
    struct node *temp = NULL;
    if ((*first) == NULL)
    {
        return;
    }
    else if ((*first)->next == NULL)
    {
        free(*first);
        (*first) == NULL;
    }
    else
    {
        temp = (*first);
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = NULL;
    }
}

void DeleteAtPos(struct node **first, int iPos)
{
    struct node *temp = NULL;
    struct node *target = NULL;

    int iCount = Count((*first));
    int i = 0;

    if(iPos < 1 || (iPos > iCount))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(first);
    }
    else if(iPos == (iCount + 1))
    {
        DeleteLast(first);
    }
    else
    {
        temp = (*first);

        for(i = 1 ; i < iPos - 1 ; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = temp->next->next;
        free(target);
        
    }
}

int main()
{
    int iRet = 0;
    struct node *head;
    head = NULL;

    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);
    iRet = Count(head);
    printf("Number of Node are : %d\n", iRet);

    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);
    iRet = Count(head);
    printf("Number of Node are : %d\n", iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of Node are : %d\n", iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of Node are : %d\n", iRet);


    InsertAtPos(&head,1001,3);

    Display(head);
    iRet = Count(head);
    printf("Number of Node are : %d\n", iRet);

    DeleteAtPos(&head,3);

    Display(head);
    iRet = Count(head);
    printf("Number of Node are : %d\n", iRet);

    return 0;
}