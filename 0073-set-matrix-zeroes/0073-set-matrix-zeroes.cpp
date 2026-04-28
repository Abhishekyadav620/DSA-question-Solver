class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>>ans;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    ans.push_back({i,j});

                }
            }
        }
        for(int k=0;k<ans.size();k++)
        {
            int row=ans[k].first;
            int col=ans[k].second;

            for(int j=0;j<n;j++)
            {
                matrix[row][j]=0;

            }
            for(int i=0;i<m;i++)
            {
                matrix[i][col]=0;

            }
        }
        
    }
};