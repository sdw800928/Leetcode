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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *ans=NULL,*ll,*rr;
        if(root==p)
            ans=p;
        else if(root==q)
            ans=q;
        
        if(root!=NULL) 
        {
            rr=lowestCommonAncestor(root->right,p,q);
            ll=lowestCommonAncestor(root->left,p,q);
            if(rr!=NULL&&ll!=NULL)
                ans=root;
            else if(ans!=NULL&&rr!=NULL)
                ans=root;
            else if(ans!=NULL&&ll!=NULL)
                ans=root;
            else if(rr!=NULL)
                ans=rr;
            else if(ll!=NULL)
                ans=ll;
        }

        return ans;
    }
};
