//
// Created by x3r1x on 07.05.2026.
//

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>

struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

void fillTree(struct TreeNode* node, int* answer, int* position)
{
    if (node == NULL)
    {
        return;
    }

    fillTree(node->left, answer, position);
    answer[(*position)++] = node->val;
    fillTree(node->right, answer, position);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* answer = malloc(sizeof(int) * 101);

    if (answer == NULL)
    {
        return NULL;
    }

    *returnSize = 0;

    fillTree(root, answer, returnSize);
    return answer;
}

int main()
{

}