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
  void inorder(TreeNode* root,vector<int>& ans)
  {
    if(root==nullptr)
    return;

    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);

  }
    bool isValidBST(TreeNode* root) {

        vector<int>ans;
        inorder(root,ans);

        int i=0;
        int j=1;
        while(j<ans.size())
        {
            if(ans[j]<=ans[i])
            return false;

            i++;
            j++;
        }
        return true;
        
    }
};