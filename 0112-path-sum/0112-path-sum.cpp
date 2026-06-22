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
    private:
    bool sum(TreeNode* node, int curr, int targetSum) {
    if (!node) return false;

    curr = curr+node->val;

    if (!node->left && !node->right)
        return curr == targetSum;

    return sum(node->left, curr, targetSum) ||
           sum(node->right, curr, targetSum);
}
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return sum(root,0,targetSum);
       
    }
};