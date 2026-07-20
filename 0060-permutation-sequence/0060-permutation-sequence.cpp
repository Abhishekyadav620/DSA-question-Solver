class Solution {
public:
     void solve(int n,int k,string &ans,vector<int>& fact,vector<int>& digit)
     {
        if(n==1)
        {
            ans+=to_string(digit.back());
            return;
        }

        int index=k/fact[n-1];

        if(k%fact[n-1]==0)
        index-=1;
        ans+=to_string(digit[index]);
        digit.erase(digit.begin()+index);
        k-=fact[n-1]*index;
        solve(n-1,k,ans,fact,digit);
     }
    string getPermutation(int n, int k) {
        vector<int>fact;
        fact.push_back(1);
        int f=1;
        for(int i=1;i<n;i++)
        {
            f=f*i;
            fact.push_back(f);
        }
        vector<int>digit;
        for(int i=1;i<=n;i++)
        {
            digit.push_back(i);
        }
        string ans="";

        solve(n,k,ans,fact,digit);
        return ans;

        
    }
};