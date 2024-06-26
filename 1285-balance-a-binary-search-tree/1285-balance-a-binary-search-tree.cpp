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
    vector<TreeNode*> arr;
    void inOrder (TreeNode* root) {
        if (!root) return;
        inOrder(root->left);
        arr.push_back(root);
        inOrder(root->right);
    }

    TreeNode* solve (int start, int end) {
        if (start > end) return NULL;
        int mid = start + (end - start) / 2;
        TreeNode* root = arr[mid];
        root->left = solve(start, mid - 1);
        root->right = solve(mid + 1, end);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        inOrder(root);
        return solve (0, arr.size() - 1);
    }
};