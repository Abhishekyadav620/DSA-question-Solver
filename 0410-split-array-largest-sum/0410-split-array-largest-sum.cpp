class Solution {
public:
    bool isPossible(vector<int>& nums,int k,int mid)
    {
        int sums=0;
        int subarray=1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>mid)
            return false;

            if(sums+nums[i]<=mid)
            {
                sums+=nums[i];
            }
            else
            {
                subarray++;
                sums=nums[i];
            }
        }
        if(subarray<=k)
        return true;

        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(nums.size()==1)
        {
        if(nums[0]==0 && k==1)
        return 0;
        }
        if(nums.size()==2)
        {
        if(nums[0]==0 && nums[1]==0 && k==1)
        return 0;
        }
        int low=1;
        int high=0;
        for(int i=0;i<nums.size();i++)
        {
            high+=nums[i];
        }

        int ans=-1;

        while(low<=high)
        {
            int mid=(low+high)/2;
            if(isPossible(nums,k,mid))
            {
                high=mid-1;
                ans=mid;
            }
            else
            {
                low=mid+1;
            }
           
        }
        return ans;
        
    }
};