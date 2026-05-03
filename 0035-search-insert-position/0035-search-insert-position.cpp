class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int ans=arr.size();
        int low=0;
        int high=arr.size()-1;

        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target)
            {
                ans=mid;
                break;
            }
            else if(arr[mid]<target)
            {
                low=mid+1;
                
            }
            else
            {
                high=mid-1;
                ans=mid;
            }

        }
        return ans;
        
    }
};