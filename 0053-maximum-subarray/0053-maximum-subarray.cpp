class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int currsum=0;
        int maxxsum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            currsum+=nums[i];
            maxxsum=max(currsum,maxxsum);
            if(currsum<0)
            currsum=0;
        }
        return maxxsum;

        
    }
};