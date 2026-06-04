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
    void helper(TreeNode* root,vector<string> &str,string s) {
        if(root==NULL) return;
        s += std::to_string(root->val) + "->";
        if(root->left==NULL && root->right==NULL){
            s.pop_back();
            s.pop_back();
            str.push_back(s);
            return;
        }
        helper(root->left,str,s);
        helper(root->right,str,s);
        return;
    }

    vector<string> binaryTreePaths(TreeNode* root){
        vector<string> result;
        string s;
        helper(root,result,s);
        return result;
    }
};