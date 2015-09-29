/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return false;
        
        sum=sum-root->val;
        

        if(root->right==NULL&&root->left==NULL&&sum==0)
            return true;
        if(root->right==NULL&&root->left==NULL)
            return false;
        if(root->right!=NULL&&root->left!=NULL)
        {
            if(hasPathSum(root->right,sum)==1||hasPathSum(root->left,sum)==1)
                return true;
            else
                return false;
        }
        if(root->right!=NULL)
            return hasPathSum(root->right,sum);
        return hasPathSum(root->left,sum);
    }
};
