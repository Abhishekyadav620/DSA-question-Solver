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
    void right(TreeNode* root,vector<int>& ans)
    {
        if(root==nullptr)
        return;

        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            ans.push_back(q.back()->val);
            while(n--)
            {
                TreeNode* u=q.front();
                q.pop();

                if(u->left!=nullptr)
                {
                    q.push(u->left);
                }
                if(u->right!=nullptr)
                {
                    q.push(u->right);
                }
            }
        }
        
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        right(root,ans);
        return ans;
        
    }
};