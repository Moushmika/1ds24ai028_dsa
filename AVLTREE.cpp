#include<iostream>
using namespace std;

//creating a node structure
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    int height;
};
//maximum of two integers
int max(int a, int b)
{
    return(a>b)? a:b;
}

//height of node
int height(struct Node *N)
{
    if (N == NULL)
        return 0;
    return N->height;
}

//creating a new node
struct Node* newNode(int value)
{
    struct Node* node =(struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->left = NULL;
    node->right= NULL;
    node->height = 1;
    return node;
}

//right rotate
struct Node* rightRotate(struct Node *y)
{
    struct Node *x = y
}