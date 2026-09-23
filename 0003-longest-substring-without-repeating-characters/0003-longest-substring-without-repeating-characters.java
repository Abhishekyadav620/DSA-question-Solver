class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n=s.length();

        int first=0;
        int second=0;
        int[] freq=new int[256];
        int len=0;

        while(second<s.length())
        {
            while(freq[s.charAt(second)]==1)
            {
                freq[s.charAt(first)]=0;
                first++;
            }
            freq[s.charAt(second)]=1;
            len=Math.max(len,second-first+1);
            second++;
        }
        return len;


        
    }
}