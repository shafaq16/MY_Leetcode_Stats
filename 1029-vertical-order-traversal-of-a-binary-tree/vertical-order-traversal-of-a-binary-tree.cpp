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
        vector<vector<int>> verticalTraversal(TreeNode* root){
            map<int, multiset<pair<int, int>>> mp;
            preorder(root, 0, 0, mp);
            vector<vector<int>> ans;
            // for(auto& [x, st] : mp){
            //     ans.push_back({});
            //     for(auto& [y, val] : st) ans.back().push_back(val);
            // }
            for(auto x : mp){
                vector<int> temp;
                for(auto y : x.second){
                    temp.push_back(y.second);
            }
            ans.push_back(temp);
        }
        return ans;
        }
        
    protected:
        void preorder(TreeNode* node, int x, int y,  map<int, multiset<pair<int, int>>>& mp){
            if(!node) return;
            mp[x].insert({y, node->val});
            preorder(node->left, x-1, y+1, mp);
            preorder(node->right, x+1, y+1, mp);
        }
};