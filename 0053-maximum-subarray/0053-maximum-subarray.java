class Solution {
    public int maxSubArray(int[] nums) {


        int n=nums.length;
        int sum=0;
        int maxxsum=Integer.MIN_VALUE;


        for(int i=0;i<nums.length;i++)
        {
            sum+=nums[i];
            maxxsum=Math.max(maxxsum,sum);
             if(sum<=0)
             {
                sum=0;
             }
            
        }
        return maxxsum;
        
        
    }
}