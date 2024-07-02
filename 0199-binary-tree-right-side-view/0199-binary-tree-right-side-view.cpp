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
    void fun(TreeNode* root, int level, vector<int> & ans){
    if(root == nullptr) return;
    
    if(ans.size() == level) ans.push_back(root->val);
    fun(root->right, level+1, ans);
    fun(root->left, level+1, ans);
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        fun(root, 0, ans);
        return ans;
    }
};