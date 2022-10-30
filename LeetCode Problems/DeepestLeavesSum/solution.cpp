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
    int ans=0;
    int findheight(TreeNode *root, int h){
        if(root == NULL)
            return h-1;
        if(root->left == NULL && root->right == NULL)
            return h;
        
        int l = findheight(root->left, h+1);
        int r = findheight(root->right, h+1);
        
        return max(l,r);
            
    }
    void func(TreeNode *root, int h, int m){
        if(root == NULL)
            return;
        if(h == m)
            ans += root->val;
        if(root->left)
            func(root->left, h+1, m );
        if(root->right)
            func(root->right, h+1,m);
    }
    int deepestLeavesSum(TreeNode* root) {
        int m = findheight(root,0);
        func(root, 0,m);
        return ans;
    }
};