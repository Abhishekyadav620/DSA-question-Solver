class Solution {
public:
    int leftmost(vector<int>& arr,int target)
    {
         int low=0;
        int high=arr.size()-1;
        int first=-1;
       
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target)
            {
                first=mid;
                high=mid-1;

            }
            else if(arr[mid]<target)
            {
                low=mid+1;
                //first=mid;

            }
            else
            {
                high=mid-1;

            }
        }
        return first;

    }
     int rightmost(vector<int>& arr,int target)
    {
         int low=0;
        int high=arr.size()-1;
        int last=-1;
       
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target)
            {
                last=mid;
                low=mid+1;

            }
            else if(arr[mid]<target)
            {
                low=mid+1;
                //

            }
            else
            {
                high=mid-1;
                //last=mid;

            }
        }
        return last;

    }
    vector<int> searchRange(vector<int>& arr, int target) {
        
      return {leftmost(arr,target),rightmost(arr,target)};
        
    }
};