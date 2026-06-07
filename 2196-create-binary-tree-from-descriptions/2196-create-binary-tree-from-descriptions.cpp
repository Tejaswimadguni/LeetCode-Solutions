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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> mp;
        unordered_set<int> childNodes;
        for(auto &i:descriptions){
            int parent=i[0];
            int child=i[1];
            int isleft=i[2];

            if(!mp.count(parent)){
                mp[parent]=new TreeNode(parent);

            }
            if(!mp.count(child)){
                mp[child]=new TreeNode(child);
            }
            if(isleft){
                mp[parent]->left=mp[child];

            }else{mp[parent]->right=mp[child];}
            childNodes.insert(child);
        }

        for(auto &i:descriptions){
            int parent=i[0];
            if (!childNodes.count(parent))
                return mp[parent];
        }
        return nullptr;
    }
};