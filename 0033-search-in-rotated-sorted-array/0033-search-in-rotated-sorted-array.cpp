class Solution {
public:
    int pivot(vector<int>& nums,int target)
    {
        int l=0;
        int r=nums.size()-1;

        while(l<r)
        {
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
    int binarySearch(int l,int r,vector<int>& nums,int target)
    {
        //int idx=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }

        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot_index=pivot(nums,target);
        int idx=binarySearch(0,pivot_index-1,nums,target);
        if(idx!=-1)
        return idx;

        idx=binarySearch(pivot_index,n-1,nums,target);
        return idx;
        
    }
};