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
    vector<vector<int>> verticalOrder(TreeNode* root) {
        if (!root) return {};
        map<int, vector<int>> map;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            TreeNode* node = q.front().first;
            int position = q.front().second;
            q.pop();
            map[position].push_back(node->val);
            if (node->left) q.push({node->left, position - 1});
            if (node->right) q.push({node->right, position + 1});
        }
        vector<vector<int>> ans;
        for (auto& it : map) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
