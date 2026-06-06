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

    vector<vector<int>> arr;

    void solve(TreeNode* root, int level){

        if(root == nullptr)
            return;
        if(arr.size() == level){
            arr.push_back({});
        }
        arr[level].push_back(root->val);
        solve(root->left, level + 1);
        solve(root->right, level + 1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        solve(root, 0);
        return arr;
    }
};
