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
    int height(TreeNode* root){
            if(root==NULL){
                return 0;
            }
            int left= height(root->left);
            int right= height(root->right);
            int treeheight= max(left,right)+1;
            return treeheight;
        }
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL){
            return true;
        }
        int leftheight= height(root->left);
        int rightheight= height(root->right);
        int diff= abs(leftheight-rightheight);
        
        bool currnode = (diff<=1);
        bool leftsubtree=isBalanced(root->left);
        bool rightsubtree=isBalanced(root->right);
        
        if(currnode && leftsubtree&& rightsubtree){
            return true;
        }
        
        return false;
    }
};