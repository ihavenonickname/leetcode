#include <stdlib.h>
#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int* inorderTraversal(struct TreeNode* root, int* returnSize);

int main()
{
    struct TreeNode* root;
    int returnSize = 0;

    root = calloc(1, sizeof(struct TreeNode));
    root->val = 1;

    root->left = NULL;

    root->right = calloc(1, sizeof(struct TreeNode));
    root->right->val = 2;

    root->right->left = calloc(1, sizeof(struct TreeNode));
    root->right->left->val = 3;

    root->right->right = NULL;

    root->right->left->left = NULL;

    root->right->left->right = NULL;

    int* r = inorderTraversal(root, &returnSize);

    printf("%d\n", returnSize);

    for (int i = 0; i < returnSize; i += 1)
    {
        printf("%d ", r[i]);
    }

    printf("\n");

    return EXIT_SUCCESS;
}
