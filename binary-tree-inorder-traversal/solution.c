#include <stdlib.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

const static int max_nodes = 100;

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    struct TreeNode* stack[max_nodes];
    int stack_len = 0;

    int* visited = calloc(max_nodes, sizeof(int));
    *returnSize = 0;

    struct TreeNode* current = root;

    while (stack_len > 0 || current != NULL)
    {
        if (current != NULL)
        {
            stack[stack_len] = current;
            stack_len += 1;
            current = current->left;
        }
        else
        {
            stack_len -= 1;
            current = stack[stack_len];
            visited[*returnSize] = current->val;
            *returnSize += 1;
            current = current->right;
        }
    }

    return visited;
}
