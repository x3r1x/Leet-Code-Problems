//
// Created by x3r1x on 14.05.2026.
//

#include <stddef.h>

struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

int dfsByHeight(struct TreeNode* node)
{
    if (node == NULL)
    {
        return 0;
    }

    const int leftHeight = dfsByHeight(node->left);
    if (leftHeight == -1)
    {
        return -1;
    }

    const int rightHeight = dfsByHeight(node->right);
    if (rightHeight == -1)
    {
        return -1;
    }

    int difference = rightHeight - leftHeight;

    if (difference < 0)
    {
        difference = -difference;
    }

    if (difference > 1)
    {
        return -1;
    }

    return leftHeight < rightHeight ? rightHeight + 1 : leftHeight + 1;
}

bool isBalanced(struct TreeNode* root)
{
    return dfsByHeight(root) != -1;
}