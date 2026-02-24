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
    TreeNode* iop(TreeNode* root){
        TreeNode* temp = root->left;
        while(temp->right){
            temp=temp->right;
        }
        return temp;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root==NULL ) return NULL;
        if(root->val==key){
            //case1: root has zero child
            if(root->left==NULL && root->right==NULL) return NULL;

            else if(root->left==NULL || root->right==NULL){//case2: root has 2 child 
                if(root->left) return root->left;
                else return root->right;
            }
            else {
                TreeNode* pred=iop(root);
                root->val=pred->val;
                root->left=deleteNode(root->left,pred->val);
            }
        } 
        else if(root->val>key){
        root->left=deleteNode(root->left,key);
        }
        else {//if(root->val<key)
        root->right=deleteNode(root->right,key);
        }
    return root;
    }
};