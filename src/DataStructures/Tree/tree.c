// tree

#include <stdio.h>
#include <stdlib.h>

// Definition of a tree node
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// Function to create a new tree node
TreeNode* createNode(int data) {
    TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node in the binary search tree
TreeNode* insertNode(TreeNode *root, int data) {
    if (root == NULL) { // Empty tree
        root = createNode(data);
    } else if (data < root->data) { // Insert in the left subtree
        root->left = insertNode(root->left, data);
    } else { // Insert in the right subtree
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Function to perform in-order traversal of the tree
void inorderTraversal(TreeNode *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Main function to demonstrate tree operations
int main() {
    TreeNode *root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    printf("Inorder traversal of the binary search tree: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
