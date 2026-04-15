class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxx=INT_MIN;
        int count=0;
       
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            count++;
            else
            {
            maxx=max(maxx,count);
            count=0;
            }

        }
        maxx=max(maxx,count);
        return maxx;
        
    }
};