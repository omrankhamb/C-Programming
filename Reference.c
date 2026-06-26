#include<stdio.h>
#include<stdlib.h>

struct Node                                             // structure Declaration
{
    int data;
    struct Node *next;                                  // Creating object of pointer to structure
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

/*-----------------------------------------------------------------------------------------------------------
            Old Name                                New name
-------------------------------------------------------------------------------------------------------------
            struct node                             NODE
            struct Node *                           PNNODE
            struct Node **                          PPNODE
-------------------------------------------------------------------------------------------------------------
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Function Name : InsertFirst 
//      DDescription  : Used to insert at first position of linkedlist
//      Parameters    : Address of First pointer & data of Node
//      Return value  : Void
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));                 // Allocate Memory
    newn->data = no;                                    // Initialse data
    newn->next = NULL;                                  // Initialise pointer

    if(*Head == NULL)                                   // LL is empty
    {
        *Head = newn;

    }
    else                                                // LL Contains at least one node
    {   
        newn->next = *Head;
        *Head = newn;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Function Name : InsertLast 
//      DDescription  : Used to insert at Last position of linkedlist
//      Parameters    : Address of First pointer & data of Node
//      Return value  : Void
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE Head,int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(NODE));                   // Allocate memory
    newn->data = no;                                      // Initialise data
    newn->next = NULL;                                    // Initialise Pointer

    if((*Head )== NULL)                                   // Linkedlist is empty
    {
        *Head = newn;

    }else                                                  // Linkedlist contains at least one node                           
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Function Name : Display 
//      DDescription  : Used to Display elements of Linkelist
//      Parameters    : First Pointer
//      Return value  : Void
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("%d\t",Head->data);
        Head = Head->next;
    }
    
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Function Name : Count 
//      DDescription  : Used to Count elements of Linkelist
//      Parameters    : First Pointer
//      Return value  : int
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Count(struct Node *Head)
{
    int iCnt  = 0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
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
    int iRet = 0;
    struct Node *First = NULL;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    
    Display(First);

    iRet = Count(First);

    printf("\nNumber of elements are %d : \n",iRet);

    InsertLast(&First,101);
    InsertLast(&First,111);

    Display(First);
    return 0;
}