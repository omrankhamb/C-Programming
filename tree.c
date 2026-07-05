#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    int data;
    struct tree *right;
    struct tree *left;

}NODE;


NODE *CreateNode(int data)
{
    NODE *new = (NODE*)malloc(sizeof(NODE));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
}

void Preorder(NODE *temp){
    if(temp == NULL){
        return;
    }
    Preorder(temp->left);
    printf("%d->",temp->data);
    Preorder(temp->right);

}

int main()
{

    NODE *head = NULL;
    head = CreateNode(1);
    head->left = CreateNode(2);
    head->right = CreateNode(3);

    head->left->left = CreateNode(8);
    head->right->right = CreateNode(11);

    head->left->right= CreateNode(12);
    head->right->left = CreateNode(16);

    Preorder(head);
    return 0;
}