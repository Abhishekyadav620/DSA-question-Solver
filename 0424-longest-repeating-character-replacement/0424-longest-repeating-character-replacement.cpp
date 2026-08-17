class Solution {
public:
    int characterReplacement(string s, int k) {
         vector<int>freq(26,0);

         int left=0;
         int maxFreq=0;
         int maxWindow=0;

         for(int right=0;right<s.length();right++)
         {
            freq[s[right]-'A']++;
            maxFreq=max(maxFreq,freq[s[right]-'A']);
            int windowlength=right-left+1;
            if(windowlength-maxFreq>k)
            {
                freq[s[left]-'A']--;
                left++;
                windowlength--;
            }
            maxWindow=max(maxWindow,windowlength);

         }
         return maxWindow;

    }
};   