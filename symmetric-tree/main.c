#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool isSymmetric(struct TreeNode* root);

int main()
{
    struct TreeNode* root = calloc(1, sizeof(struct TreeNode));

    printf("%d\n", isSymmetric(root));

    return EXIT_SUCCESS;
}
