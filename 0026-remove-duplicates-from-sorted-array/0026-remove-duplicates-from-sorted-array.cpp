class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto it: mp)
        {
            ans.push_back(it.first);
        }
        for(int i=0;i<ans.size();i++)
        {
            nums[i]=ans[i];
        }
        return ans.size();
        
    }
};