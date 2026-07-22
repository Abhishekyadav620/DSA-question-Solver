class Solution {
public:
    bool search(vector<int>& matrix,int target)
    {
        int l=0;
        int r=matrix.size()-1;
        bool ans=false;

        while(l<=r)
        {
            int mid=(l+r)/2;
            if(matrix[mid]>target)
            {
                r=mid-1;

            }
            else if(matrix[mid]<target)
            {
                l=mid+1;

            }
            else
            {
                return true;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool ans=false;

        for(int i=0;i<m;i++)
        {
          if(search(matrix[i],target)==true)
          return true;
        }
        return false;
        
    }
};