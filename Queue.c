#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

void Display(struct node *first)
{
    while(first != NULL)
    {
        printf("|   %d   |\n",first->data);
        first = first->next;
    }

    printf("|________|\n");

}

void Enqueue(struct node **first,int iNo)       // Adding element frim last(InsertFirst)
{
    struct node *newn = NULL;                   // Craeetin pointer to Create and store node
    newn = (struct node *)malloc(sizeof(struct node));

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

void Dequeue(struct node **first)              // Popping element from last(DeleteLast)
{
    struct node *temp = NULL;
    if((*first) == NULL)
    {
        printf("Queue is empty \n");
        return ;
    }
    else
    {
        temp = (*first);

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

int Count(struct node * first)
{
    int iCnt = 0 ;
    while(first != NULL)
    {
        first = first->next;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    struct node *head = NULL;
    int iRet = 0;

    Enqueue(&head,11);
    Enqueue(&head,21);
    Enqueue(&head,51);
    Enqueue(&head,81);

    iRet = Count(head);
    Display(head);
    printf("Element in stack are : %d\n",iRet);

    Dequeue(&head);

    iRet = Count(head);
    Display(head);
    printf("Element in stack are : %d\n",iRet);
    
    return 0;
}