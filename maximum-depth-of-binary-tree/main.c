#include <stdlib.h>
#include <stdio.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int maxDepth(struct TreeNode* root);

int main()
{
    printf("Ok\n");

    return EXIT_SUCCESS;
}
