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
    int deepestLeavesSum(TreeNode* root) {
        if (!root)
            return 0;
        int sum = 0;
        int len = 0;
        std:: queue<struct TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            sum = 0;
            len = q.size();
            for (int i = 0; i < len; i++) {
                root = q.front();
                q.pop();
                sum += root->val;
                if (root->left)
                    q.push(root->left);
                if (root->right)
                    q.push(root->right);
            }
        }
        return sum;
    
    }
};