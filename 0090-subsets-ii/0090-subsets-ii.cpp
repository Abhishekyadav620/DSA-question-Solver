class Solution {
public:
void subset(vector<int>& nums,vector<int>&ans,vector<vector<int>>& bigans,int index)
    {
        if(index==nums.size())
        {
            bigans.push_back(ans);
            return;
        }
        //take the current element
        ans.push_back(nums[index]);
        subset(nums,ans,bigans,index+1);
        ans.pop_back();
        
        sort(nums.begin(), nums.end());
    
        while(index+1<nums.size() && nums[index]==nums[index+1])
        index++;
        

        subset(nums,ans,bigans,index+1);
       

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<int>ans;
        vector<vector<int>>bigans;

        subset(nums,ans,bigans,0);
        return bigans;
        
    }
};