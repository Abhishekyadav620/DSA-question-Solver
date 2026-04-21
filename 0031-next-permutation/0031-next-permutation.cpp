class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int golaindex=-1;
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
            golaindex=i-1;
            break;
            }
        }
        if(golaindex!=-1)
        {
            int swap_index=golaindex;
            for(int j=n-1;j>golaindex;j--)
            {
                 if(nums[j] > nums[golaindex]) {   
                    swap_index = j;
                    break;
                }
            }
             swap(nums[golaindex],nums[swap_index]);
        }
       
        reverse(nums.begin() + golaindex + 1, nums.end());
        
    }
};