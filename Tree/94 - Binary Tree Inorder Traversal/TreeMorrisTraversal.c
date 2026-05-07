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
    struct TreeNode* curr = root;
    struct TreeNode* prev;

    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            answer[(*returnSize)++] = curr->val;
            curr = curr->right;
        }
        else
        {
            prev = curr->left;

            while (prev->right != NULL && prev->right != curr)
            {
                prev = prev->right;
            }

            if (prev->right == NULL)
            {
                prev->right = curr;
                curr = curr->left;
            }
            else
            {
                prev->right = NULL;
                answer[(*returnSize)++] = curr->val;
                curr = curr->right;
            }
        }
    }


    return answer;
}
