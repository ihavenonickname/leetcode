#include <stdlib.h>
#include <stdbool.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

static bool helper(struct TreeNode* leftNode, struct TreeNode* rightNode)
{
    if (leftNode == NULL || rightNode == NULL)
    {
        return !leftNode && !rightNode;
    }

    return
        leftNode->val == rightNode->val
        && helper(leftNode->left, rightNode->right)
        && helper(leftNode->right, rightNode->left);
}

bool isSymmetric(struct TreeNode* root)
{
    return root == NULL || helper(root->left, root->right);
}
