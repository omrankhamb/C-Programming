#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE;


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Function Name : InsertFirst 
//      Description  : Used to insert at first position of linkedlist
//      Parameters    : Address of First pointer & data of Node
//      Return value  : Void
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
NODE *InsertFirst(NODE *Head,int ino)
{
    NODE *newn = NULL;
    newn = (NODE*)malloc(sizeof(NODE));
    newn->data = ino;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        newn->next = Head;
        Head = newn;
    }

    return Head;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Function Name : InsertLast 
//      DDescription  : Used to insert at Last position of linkedlist
//      Parameters    : Address of First pointer & data of Node
//      Return value  : Void
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


NODE *InsertLast(NODE *Head,int ino)
{
    NODE *temp =  Head;
    NODE *newn = NULL;
    newn = (NODE*)malloc(sizeof(NODE));
    newn->data = ino;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;        
    }

    return Head;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Function Name : Display 
//      DDescription  : Used to Display elements of Linkelist
//      Parameters    : First Pointer
//      Return value  : Void
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(NODE *Temp)
{
    while (Temp)
    {
        printf("%d->",Temp->data);
        Temp =Temp->next;
    }
    printf("NULL\n");
    
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Function Name : Count 
//      DDescription  : Used to Count elements of Linkelist
//      Parameters    : First Pointer
//      Return value  : int
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(NODE *temp)
{
    int iCnt = 0;
    while (temp)
    {
        iCnt++;
        temp = temp->next;
    }

    return iCnt;
    
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Function Name : Main 
//      Description   : Used to create LinkeList
//      Parameters    : NULL
//      Return value  : int
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    NODE *HEAD = NULL;
    HEAD = InsertFirst(HEAD,51);
    HEAD = InsertFirst(HEAD,21);
    HEAD = InsertFirst(HEAD,11);


    HEAD = InsertLast(HEAD,121);
    HEAD = InsertLast(HEAD,131);
    HEAD = InsertLast(HEAD,141);

    Display(HEAD);

    HEAD = InsertFirst(HEAD,1131);

    Display(HEAD);

    return 0;
}