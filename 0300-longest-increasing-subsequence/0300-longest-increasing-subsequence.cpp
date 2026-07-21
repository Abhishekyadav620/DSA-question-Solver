class Solution {
public:
    int LIS(vector<int> &nums,int i,int prev,vector<vector<int>>&dp)
    {
        if(i>=nums.size())
        return 0;
        if(dp[i][prev+1]!=-1)
        return dp[i][prev+1];

        int take=0;
        if(prev==-1 || nums[prev]<nums[i])
        {
            take=1+LIS(nums,i+1,i,dp);
        }
        int skip=LIS(nums,i+1,prev,dp);
        return dp[i][prev+1]=max(skip,take);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));

       return LIS(nums,0,-1,dp);

        
    }
};