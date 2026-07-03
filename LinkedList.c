#include<stdio.h>
#include<stdlib.h>

typedef struct LinkeList
{
    int data;
    struct LinkeList *next;

}NODE;

NODE *Push_Front(NODE *head,int data)
{
    NODE *new = (NODE*)malloc(sizeof(NODE));
    new->data = data;
    new->next = NULL;
    if(head == NULL){
        head = new;
    }
    else
    {
        new->next = head;
        head = new;
    }
    return head;
}

NODE *Push_Back(NODE *head,int data)
{
    NODE *new = (NODE*)malloc(sizeof(NODE));
    new->data = data;
    new->next = NULL;
    if(head == NULL){
        head = new;
    }
    else
    {
        NODE *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = new;    
        
    }
    return head;
}

int Length(NODE *temp){
    int iCnt = 1;
    while (temp)
    {
        iCnt++;
        temp = temp->next;
    }
    
    return iCnt;
}

NODE *Insert_At_Position(NODE *head,int data,int iPos)
{
    int iLength = Length(head);
    if(iLength < iPos || iLength == 0){
        printf("Linkdlist is so small to insert %d\n",iLength);
        return head;
    }
    NODE *temp = head;

    NODE *new = (NODE*)malloc(sizeof(NODE));
    new->data = data;
    new->next = NULL;

    if(iPos == 1)
    {
        head = Push_Front(head,data);
        return head;
    }
    iPos--;
    while (iPos != 1)
    {
        iPos--;
        temp = temp->next;
    }

    new->next = temp->next;
    temp->next = new;

    return head;
}

void display(NODE *head)
{
    NODE *temp = NULL;
    temp = head;

    while (temp)
    {
        printf("%d->",temp->data);
        temp = temp->next;

    }
    
    printf("NULL");
    
}

int main()
{
    NODE *head = NULL;

    head = Push_Front(head,21);
    head = Push_Front(head,11);
    head = Push_Back(head,31);
    head = Push_Back(head,41);
    head = Insert_At_Position(head,101,5);
    
    display(head);
    
    return 0;
}