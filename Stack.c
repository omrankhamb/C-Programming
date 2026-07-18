#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct nide *next;
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

int Count(struct node *first)
{
    int iCount = 0;

    while(first != NULL)
    {
        first = first->next;
        iCount++;
    }

    return iCount;
}

void Push(struct node **first,int iNo)      // InsertFirst
{
    struct node *newn = NULL;

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

int Pop(struct node **first)
{
    struct node *temp = NULL;
    int iValue = 0;

    if((*first) == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        temp = (*first);
        (*first) = (*first)->next;
        iValue = temp->data;
        free(temp);

    }
    return iValue;
}

int Pip(struct node **first)
{
    return (*first) == NULL ? -1 : (*first)->data;
}

int main()
{
    struct node *first = NULL;
    int iRet = 0;

    Push(&first,11);
    Push(&first,21);
    Push(&first,51);
    Push(&first,81);

    Display(first);
    iRet = Count(first);
    printf("Number of Node are : %d\n",iRet);

    iRet = Pop(&first);
    printf("Popped element is : %d\n",iRet);

    Display(first);
    iRet = Count(first);
    printf("Number of Node are : %d\n",iRet);

    iRet = Pip(&first);
    printf("Elemnt At top of stack is : %d\n",iRet);

    Display(first);
    iRet = Count(first);
    printf("Number of Node are : %d\n",iRet);

    return 0;
}
