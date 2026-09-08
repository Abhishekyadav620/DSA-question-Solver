class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      
      int i=0;
      int j=i+1;
      int count=0;

      while(j<nums.size())
      {
        if(nums[i]==nums[j])
        {
            j++;
        }
        else
        {
            i++;
            nums[i]=nums[j];
            count++;
            j++;
        }
      }
      return count+1;
        
    }
};