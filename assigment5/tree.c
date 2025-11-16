/* Implementing a binary search tree in C */

#include <stdio.h>
#include <stdlib.h>

/* Structure of a node in BST */ 
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int value) {
    /* TODO: create a new node. */
    Node* node = malloc(sizeof(Node));
    node->data = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insert(Node* root, int value) {
    /* TODO: insert the given value in the BST. The BST property must not be violated. */
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right =insert(root->right,value);
    } 
    return root; 
}

Node* search(Node* root, int value) {
    /* TODO: search the tree for the given value. You must use the BST property. */
    if (root == NULL) {
        return NULL;
    }
    if (value == root->data) {
        return root;
    }
    if (value<root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

void inOrderTraversal(Node* root) {
    /* TODO: traverse the tree in order to print values in ascending order. */
    if (root == NULL) {
        return;
    }
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}

void freeTree(Node* root) {
    if (root == NULL) {
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main() { 
    int n;
    printf("Enter the number of values to be inserted: ");
    scanf("%d", &n);

    int values[n];
    printf("Enter %d integers in random order: ", n);
    for(int i=0; i< n; i++) {
        scanf("%d", values+i);
    }

    Node* root = NULL;
    /* Insert values into BST */ 
    for (int i = 0; i < n; i++) {
        root = insert(root, values[i]);
    }

    /* Print values in a sorted manner using in-order traversal */
    printf("In-order traversal: ");
    inOrderTraversal(root);
    printf("\n");

    /* Search for a value in BST */
    int searchValue;
    printf("Enter a value to be searched: ");
    scanf("%d", &searchValue);
    if (search(root, searchValue)) {
        printf("%d found in BST.\n", searchValue);
    } else {
        printf("%d not found in BST.\n", searchValue);
    }

    freeTree(root); /* free the tree */

    return 0;
}
