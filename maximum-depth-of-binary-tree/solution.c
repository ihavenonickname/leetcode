#include <stdlib.h>
#include <stdio.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

const int max_num_nodes = 25;

int maxDepth(struct TreeNode* root)
{
    struct TreeNode* stack_node[max_num_nodes];
    int stack_depth[max_num_nodes];
    int stack_index = -1;

    struct TreeNode* current_node = root;

    int max_depth = 0;
    int current_depth = 0;

    while (stack_index >= 0 || current_node != NULL)
    {
        if (current_node != NULL)
        {
            current_depth += 1;
            stack_index += 1;

            stack_node[stack_index] = current_node;
            stack_depth[stack_index] = current_depth;

            current_node = current_node->left;
        }
        else
        {
            current_node = stack_node[stack_index]->right;
            current_depth = stack_depth[stack_index];
            stack_index -= 1;
        }

        if (current_depth > max_depth)
        {
            max_depth = current_depth;
        }
    }

    return max_depth;
}
