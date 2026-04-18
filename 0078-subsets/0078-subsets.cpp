class Solution {
public:
    void printsubset(vector<int>ans,vector<vector<int>>&ans2,vector<int>&nums,int index)
    {
        if(index==nums.size())
        {
        ans2.push_back(ans);
        return;
        }
        printsubset(ans,ans2,nums,index+1);
        ans.push_back(nums[index]);
        printsubset(ans,ans2,nums,index+1);

        //ans.pop_back();

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>ans2;
        printsubset(ans,ans2,nums,0);

        return ans2;
        
    }
};