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
    TreeNode* searchBST(TreeNode* root, int data) {
        if(!root) return nullptr;
        while(root){
            if(root->val == data) return root;
            else if(root != nullptr && root->val > data){
                root = root->left;
            }
            else if(root != nullptr && root->val < data){
                root = root->right;
            }
            else return nullptr;
        }
        return nullptr;
    }
};