//
// Created by x3r1x on 13.05.2026.
//

#include <stddef.h>

struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

int minDepth(struct TreeNode* root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->right == NULL)
    {
        return minDepth(root->left) + 1;
    }

    if (root->left == NULL)
    {
        return minDepth(root->right) + 1;
    }

    const int leftDepth = minDepth(root->left);
    const int rightDepth = minDepth(root->right);

    return leftDepth < rightDepth ? leftDepth + 1 : rightDepth + 1;
}