class Solution {
public:
    void twosum(vector<int>& nums,int target,int i,int j,vector<vector<int>>& result)
    {
        while(i<j)
        {
            int sum=nums[i]+nums[j];
            if(sum>target)
            j--;
           else if(sum<target)
            i++;
            else
            {

            while(i<j && nums[i]==nums[i+1])
            i++;

            while(i<j && nums[j]==nums[j-1])
            j--;

            result.push_back({-target,nums[i],nums[j]});
            i++;
            j--;
            }
        }
       
    }
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n=nums.size();
        vector<vector<int>>result;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
                int n1=nums[i];
                int target=-n1;
                twosum(nums,target,i+1,n-1,result);
            
        }
        return result;
        
        
    }
};