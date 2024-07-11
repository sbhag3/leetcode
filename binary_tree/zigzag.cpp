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
    int pathLength = 0;
    void dfs(TreeNode* node, bool left, int steps) {
        if (!node) return;
        pathLength = max(pathLength, steps);
        if (left) {
            dfs(node->left, !left, steps + 1);
            dfs(node->right, left, 1);
        } else {
            dfs(node->left, left, 1);
            dfs(node->right, !left, steps + 1);
        }
    }
    int longestZigZag(TreeNode* root) {
        dfs(root, false, 0);
        dfs(root, true, 0);
        return pathLength;
    }
    
};
