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
    vector<int> rightSideView(TreeNode* root) {
        if(!root)
            return {};
        
        queue<TreeNode*> que;
        vector<int> result;
        
        que.push(root);
        
        while(!que.empty()) {
            int n = que.size();
            TreeNode* rightNode = NULL;
            while(n--) {
                rightNode = que.front();
                que.pop();
                
                if(rightNode->left)
                    que.push(rightNode->left);
                if(rightNode->right)
                    que.push(rightNode->right);
            }
            result.push_back(rightNode->val);
        }
        return result;
    }
};