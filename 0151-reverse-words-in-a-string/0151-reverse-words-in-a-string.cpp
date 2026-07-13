class Solution {
public:
    string reverseWords(string s) {

        stringstream ss(s);
        string words;
        vector<string>ans;

        while(ss>>words)
        {
            ans.push_back(words);
        }
        string str="";
        for(int i=ans.size()-1;i>0;i--)
        {
            str+=ans[i]+" ";
        }
        str+=ans[0];
        return str;
        
    }
};