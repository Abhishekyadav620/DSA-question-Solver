class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            count++;
            else
            arr.push_back(nums[i]);
        }
        for(int i=n-count;i<nums.size();i++)
        {
            arr.push_back(0);
        }
        nums=arr;
        
    }
};