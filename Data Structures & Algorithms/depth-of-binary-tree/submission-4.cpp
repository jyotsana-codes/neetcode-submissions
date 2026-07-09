/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }

        int leftHt = maxDepth(root->left);
        int rightHt = maxDepth(root->right);
        return max(leftHt, rightHt) + 1;

        /* if(root == NULL)
        {
            return 0;
        }

        int leftcount = Count(root->left);
        int rightCount = Count(root->right);
        return max(leftcount, rightCount) + 1;
        */

         /* if(root == NULL)
        {
            return 0;
        }

        int leftsum = Count(root->left);
        int rightsum = Count(root->right);
        return leftsum+ rightsum + root->data;
        */
        
    }
};
