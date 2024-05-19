// tree data structure

#include <stdio.h>
#include <stdlib.h>

// Definition of a tree node
typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// Function to create a new tree node
TreeNode* createNode(int val) {
    TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node in the binary search tree
TreeNode* insertNode(TreeNode *root, int val) {
    if (root == NULL) { // Empty tree
        root = createNode(val);
    } else if (val < root->val) { // Insert in the left subtree
        root->left = insertNode(root->left, val);
    } else { // Insert in the right subtree
        root->right = insertNode(root->right, val);
    }
    return root;
}

// Function to perform in-order traversal of the tree
void inorderTraversal(TreeNode *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->val);
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
