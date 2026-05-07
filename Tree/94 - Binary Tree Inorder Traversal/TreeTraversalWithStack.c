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

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int* answer = malloc(sizeof(int) * 101);
    *returnSize = 0;
    struct TreeNode** stack = malloc(sizeof(struct TreeNode*) * 101);
    int stackSize = 0;
    struct TreeNode* curr = root;

    while (curr != NULL || stackSize != 0)
    {
        while (curr != NULL)
        {
            stack[stackSize++] = curr;
            curr = curr->left;
        }

        answer[(*returnSize)++] = stack[--stackSize]->val;
        curr = stack[stackSize]->right;
    }

    return answer;
}