#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *createNode(int data)
{
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// it will first print all the left then right values
void printTree(struct TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    printTree(root->left);
    printTree(root->right);
}
// INORDER
void inOrder(struct TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

// pre order
void preOrder(struct TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

// POST ORDER
void postOrder(struct TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}
// SEARCHING ELEMENT

void search(struct TreeNode *root, int val)
{
    if (root->data == val)
    {
        printf("\n%d is present ", val);
    }
    if (root->data > val)
    {
        search(root->left, val);
    }
    else
    {
        search(root->right, val);
    }
}
// HEIGHT
//  int height(struct TreeNode* root){
//      if(root==NULL){
//          return;
//      }
//      int left=height(root->left);
//      int right=height(root->right);
//      return left<right?left+1:right+1;
//  }

// DELETE ELEMENT

struct TreeNode *findMin(struct TreeNode *node)
{
    while (node->left != NULL)
    {
        node = node->left;
    }
    return node;
}

struct TreeNode *deleteNode(struct TreeNode *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (data < root->data)
    {
        root->left = deleteNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = deleteNode(root->right, data);
    }
    else
    {
        if (root->left == NULL)
        {
            struct TreeNode *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct TreeNode *temp = root->left;
            free(root);
            return temp;
        }

        struct TreeNode *temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

struct TreeNode *insertInBST(struct TreeNode *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }

    if (data < root->data)
    {
        root->left = insertInBST(root->left, data);
    }
    else
    {
        root->right = insertInBST(root->right, data);
    }

    return root;
}
bool prime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count > 0)
    {
        return false;
    }
    return true;
}

struct TreeNode *deletePrime(struct TreeNode *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    root->left = deletePrime(root->left);
    root->right = deletePrime(root->right);
    if (prime(root->data))
    {
        root = deleteNode(root, root->data);
    }

    return root;
}

int main()
{
    struct TreeNode *root = NULL;

    root = insertInBST(root, 50);
    root = insertInBST(root, 30);
    root = insertInBST(root, 70);
    root = insertInBST(root, 20);
    root = insertInBST(root, 40);
    root = insertInBST(root, 60);
    root = insertInBST(root, 80);

    printf("Binary Search Tree Values\n");
    printTree(root);
    printf("\n");

    // Insert multiples of 5 automatically
    int multiple = 5;
    int noOfMultiples = 10; // You can change this value according to your needs

    for (int i = 1; i < noOfMultiples; i++)
    {
        root = insertInBST(root, multiple * i);
    }

    printf("Binary Search Tree Values after inserting multiples\n");
    printTree(root);
    printf("\n");

    // Perform in-order traversal
    printf("In-order Traversal\n");
    inOrder(root);
    printf("\n");

    // Delete prime numbers from the BST
    deletePrime(root);
    printf("After deleting all prime numbers\n");
    inOrder(root);
    printf("\n");

    return 0;
}