#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *create()
{
    int x;
    struct node *newNode;

    printf("Enter the data of the node (-1 for no node):\n");
    scanf("%d", &x);

    if (x == -1)
    {
        return NULL;
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = x;

        printf("Enter the left child of %d (or -1 for no left child):\n", x);
        newNode->left = create();

        printf("Enter the right child of %d (or -1 for no right child):\n", x);
        newNode->right = create();
    }
    return newNode;
}

void printInOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    // In-order traversal: Left, Root, Right
    printInOrder(root->left);
    printf("%d ", root->data);
    printInOrder(root->right);
}

void printPreOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    // Pre-order traversal: Root, Left, Right
    printf("%d ", root->data);
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printPostOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    // Post-order traversal: Left, Right, Root
    printPostOrder(root->left);
    printPostOrder(root->right);
    printf("%d ", root->data);
}

int main()
{
    struct node *root = create();

    printf("\nBinary Tree in In-order (Left, Root, Right) Traversal:\n");
    printInOrder(root);

    printf("\nBinary Tree in Pre-order (Root, Left, Right) Traversal:\n");
    printPreOrder(root);

    printf("\nBinary Tree in Post-order (Left, Right, Root) Traversal:\n");
    printPostOrder(root);

    return 0;
}
