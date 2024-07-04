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
    int cnt = 0;
    void fun(int& ans, TreeNode* root, int k){
        if(!root || cnt == k) return;

        fun(ans, root->left, k);

        cnt++;
        if (cnt == k) {
            ans = root->val;
            return;
        }

        fun(ans, root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans = INT_MAX;
        fun(ans, root, k);
        return ans;
    }
};