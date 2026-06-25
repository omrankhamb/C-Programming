#include<stdio.h>
#include<stdlib.h>


// Structure of Linkedlist
typedef struct Node
{
    int data;
    struct Node *next;
}Node;

// Printing the Whole Linkedlist
void print_Linledlist(Node *temp)
{
    while (temp)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    
}

// Creating linkelist
Node *Linkelidt(Node *head,int Arr[])
{
    Node *temp = head;
    for(int i = 0 ; i < 7 ; i++)
    {
        Node *new = (Node*)malloc(sizeof(Node));
        new->data = Arr[i];
        if (head == NULL)
        {
            head = new;
            temp = new;
        }else
        {
            temp->next = new;
            temp = temp->next;
            temp->next = NULL;
        }
    }

    return head;

}

// Push the Linkelist
Node *pushX(Node *head,int x)
{
    Node *temp = head;
    Node *new = (Node*)malloc(sizeof(Node));
    new->data = x;
    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = new;
    temp = temp->next;
    temp->next = NULL;

    return head;
}

// PoP the Linkelist
void popX(Node *temp)
{
    while (temp->next->next)
    {
        temp = temp->next;
    }
    temp->next= NULL;
}

// insert at index
Node *insert(Node *temp,int x)
{
    
}

int main()
{
    int Arr[] = {1,2,3,4,5,6,7};
    Node *head = NULL,*tail = NULL;

    Node *temp = head;
    head=Linkelidt(head,Arr);

    // Before push
    printf("Before push : \n");
    print_Linledlist(head);

    // Push
    pushX(head,14);
    pushX(head,18);

    // After push
    printf("Linkedlist after push : \n");
    print_Linledlist(head);

    // After pop
    popX(head);
    popX(head); 
    print_Linledlist(head);

    return 0;
}