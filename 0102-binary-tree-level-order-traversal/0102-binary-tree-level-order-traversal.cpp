class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans2;

        if(root == nullptr)
            return ans2;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int size = q.size();
            vector<int> level;

            for(int i = 0; i < size; i++)
            {
                TreeNode* temp = q.front();
                q.pop();

                level.push_back(temp->val);

                if(temp->left)
                    q.push(temp->left);

                if(temp->right)
                    q.push(temp->right);
            }

            ans2.push_back(level);
        }

        return ans2;
    }
};