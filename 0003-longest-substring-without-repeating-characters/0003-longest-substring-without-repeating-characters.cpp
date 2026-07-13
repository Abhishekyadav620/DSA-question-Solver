class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>freq(256,0);
        int length=0;
        int first=0;
        int second=0;

        while(second<s.length())
        {
            while(freq[s[second]])
            {
                freq[s[first]]=0;
                first++;
            }
            freq[s[second]]=1;
            length=max(length,second-first+1);
            second++;

        }
        return length;
        
    }
};