class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        
        if(s.length()!=t.length())
        return false;

        for(int i=0;i<s.length();i++)
        {
            mp1[s[i]]++;
        }


        for(int i=0;i<t.length();i++)
        {
            mp2[t[i]]++;
        }

        for(auto it: mp1)
        {
            if(it.second!=mp2[it.first])
            return false;

        }
        return true;
        
    }
};