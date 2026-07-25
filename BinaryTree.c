#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *rchild;
    struct node *lchild;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Inorder(PNODE temp) // call by value
{
    if (temp != NULL)
    {
        Inorder(temp->lchild);
        printf("%d\n", temp->data);
        Inorder(temp->rchild);
    }

    return;
    // no need to write but readibilty increasesJ
}

void PreOrder(PNODE temp) // call by value
{
    if (temp != NULL)
    {
        printf("%d\n", temp->data);
        Inorder(temp->lchild);
        Inorder(temp->rchild);
    }

    return;
    // no need to write but readibilty increasesJ
}

void PostOrder(PNODE temp) // call by value
{
    if (temp == NULL)
    {
        return;
    }
    PostOrder(temp->lchild);
    PostOrder(temp->rchild);
    printf("%d\n", temp->data);

    // no need to write but readibilty increasesJ
}

int Count(PNODE temp)
{
    static int iCount = 0;
    if (temp == NULL)
    {
        return;
    }

    iCount++;
    Count(temp->lchild);
    Count(temp->rchild);

    return iCount;
}

void Insert(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->rchild = NULL;
    newn->lchild = NULL;

    PNODE temp = NULL;

    if ((*first) == NULL)
    {
        (*first) = newn;
    }

    else
    {
        temp = (*first);
        while (1)
        {
            if (iNo < temp->data)
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }

                temp = temp->lchild;
            }
            else if (iNo > temp->data)
            {
                if (temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }

                temp = temp->rchild;
            }
            else if (temp->data == iNo)
            {
                printf("Ndde is present");
                free(newn);
                break;
            }
        }
    }
}

int CountLeafNode(PNODE temp)
{
    static int iCnt = 0;

    if (temp != NULL)
    {
        if (temp->lchild == NULL && temp->rchild == NULL)
        {
            iCnt++;
        }
        CountLeafNode(temp->lchild);
        CountLeafNode(temp->rchild);
    }

    return iCnt;
}

int CountParentNode(PNODE temp)
{
    static int iCnt = 0;
    if (temp != NULL)
    {
        if (temp->rchild != NULL || temp->lchild != NULL)
        {
            iCnt++;
        }

        CountParentNode(temp->lchild);
        CountParentNode(temp->rchild);
    }

    return iCnt;
}

bool Search(PNODE first, int iNo)
{
    bool bFlag = false;

    while (first != NULL)
    {
        if (iNo == first->data)
        {
            bFlag = true;
            break;
        }
        else if (iNo < first->data)
        {
            first = first->lchild;
        }
        else if (iNo > first->data)
        {
            first = first->rchild;
        }
    }

    return bFlag;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    Insert(&head, 11);
    Insert(&head, 7);
    Insert(&head, 5);
    Insert(&head, 17);
    Insert(&head, 21);
    Insert(&head, 27);
    Insert(&head, 19);
    Insert(&head, 4);
    Insert(&head, 14);
    Insert(&head, 15);

    printf("Inorder Order traversal\n");
    Inorder(head);

    iRet = Count(head);
    printf("Number if element in tree is : %d\n", iRet);

    iRet = CountLeafNode(head);
    printf("Number of leaf node is : %d\n", iRet);

    iRet = CountParentNode(head);
    printf("Number of parent node is : %d\n", iRet);

    if (Search(head, 19))
    {
        printf("NUmber is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    return 0;
}