class Solution {
public:
    string reverseWords(string s) {
       string words;

       stringstream ss(s);

       vector<string>ans;

       while(ss>>words)
       {
        ans.push_back(words);
       }

       string ans2="";

       for(int i=ans.size()-1;i>0;i--)
       {
        ans2+=ans[i]+" ";
       }
       return ans2+ans[0];
    
        
    }
};