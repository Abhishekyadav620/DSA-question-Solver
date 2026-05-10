class Solution {
public:
    bool search(vector<int>ans,int target)
    {
        int l=0;
        int r=ans.size()-1;
        int answer=-1;
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(ans[mid]==target)
            {
             return true;
            }
            else if(ans[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        for(int i=0;i<m;i++)
        {
            int ans=search(matrix[i],target);
            if(ans==true)
            return true;
        }
        return false;
       
        
    }
};