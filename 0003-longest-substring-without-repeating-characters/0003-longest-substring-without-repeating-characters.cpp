class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();

        int first=0;
        int second=0;
        vector<int>freq(256,0);
        int len=0;
        

        while(second<s.length())
        {
          
          while(freq[s[second]])
          {
            freq[s[first]]=0;
            first++;

          }
          freq[s[second]]=1;
           len=max(len,second-first+1);
          second++;


        }
        return len;
     
    
    }
};