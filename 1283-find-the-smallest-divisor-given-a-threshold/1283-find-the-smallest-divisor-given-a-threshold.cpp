class Solution {
public:
    int isSum(vector<int>& nums, int mid, int threshold)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%mid==0)
            {
                sum+=(nums[i]/mid);
            }
             if(nums[i]%mid!=0)
            {
                sum+=(nums[i]/mid)+1;
            }
            
            
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int start=1;
        int end=*max_element(nums.begin(),nums.end());

        int result=-1;

        while(start<=end)
        {
            int mid=(start+end)/2;
            if(isSum(nums,mid,threshold)<=threshold)
            {
                end=mid-1;
                result=mid;
            }
            else
            {
                start=mid+1;
            }
        }
        return result;
        
    }
};