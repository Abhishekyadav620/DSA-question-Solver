class Solution {
public:
  
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int l=0;
        int r=n-1;
       //int int mid=-1;

        while(l<=r)
        {
            int mid=(l+r)/2;
            int no_of_missing=arr[mid]-(mid+1);
            if(no_of_missing<k)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        return l+k;
       
       
        
    }
};