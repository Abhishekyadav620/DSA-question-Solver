class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;//stores number along with the frequency
        }
        for(auto pair: m)
        {
            if(pair.second>1)
            {
                return pair.first;
            }
        }
        return 0;
        
    }
};