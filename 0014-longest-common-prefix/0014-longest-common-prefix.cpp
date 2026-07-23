class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        
        sort(strs.begin(),strs.end());
        string first=strs[0];
        if(first=="")
        return "";
        string last=strs[n-1];
        string ans="";
           int len = min(first.length(), last.length());

        for(int i=0;i<len;i++)
        {
            if(first[i]==last[i])
            {
                ans+=first[i];
            }
            else
            {
                break;
            }

        }
        return ans;
        
    }
};