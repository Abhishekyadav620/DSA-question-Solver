class Solution {
public:
    int pivot(vector<int>& nums)
    {
        int l=0;
        int r=nums.size()-1;

        while(l<r)
        {
            while(l<r && nums[l]==nums[l+1])
            l++;

            while(l<r && nums[r]==nums[r-1])
            r--;
            
            int mid=(l+r)/2;
            if(nums[mid]>nums[r])
            {
                l=mid+1;
            }
            else if(nums[mid]<nums[r])
            r=mid;
            else
            r--;
        }
        return l;

    }
    bool binarySearch(int l,int r,vector<int>& arr,int target)
    {
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]==target)
            {
                return true;
            }
            else if(arr[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot_index=pivot(nums);
        bool ans=binarySearch(0,pivot_index-1,nums,target);
        if(ans!=false)
        return true;
        ans=binarySearch(pivot_index,n-1,nums,target);
        return ans;
        
    }
};