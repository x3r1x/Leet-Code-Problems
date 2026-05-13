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

int maxDepth(const struct TreeNode* root)
{
    if (root == NULL)
    {
        return 0;
    }

    const int leftDepth = maxDepth(root->left);
    const int rightDepth = maxDepth(root->right);

    return leftDepth < rightDepth ? rightDepth + 1 : leftDepth + 1;
}