class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=p.length();

        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(int i=0;i<n;i++)
        {
            mp1[p[i]]++;
        }
        vector<int>ans;

        for(int i=0;i<s.length();i++)
        {
            mp2[s[i]]++;
            if(i>=n)
            {
                mp2[s[i-n]]--;
                if(mp2[s[i-n]]==0)
                {
                    mp2.erase(s[i-n]);
                }
            }
            if(mp1==mp2)
            {
                ans.push_back(i-n+1);
            }
        }
        return ans;
        
    }
};