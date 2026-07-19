class Solution {
public:
    int merge(vector<int>& arr,int start,int mid,int end)
    {
        int rp = 0;

        
        int j = mid + 1;
        for(int i = start; i <= mid; i++)
        {
            while(j <= end && arr[i] > 2LL * arr[j])
            {
                j++;
            }
            rp += (j - (mid + 1));
        }
        int left=start;
        int right=mid+1;
        vector<int> ans;
        //int rp=0;
        while(left<=mid && right<=end)
        {
            if(arr[left]<=arr[right])
            {
                ans.push_back(arr[left]);
                left++;
            }
            else 
            {
                ans.push_back(arr[right]);
                right++;
                
            }
           

        }
        while(left<=mid)
        {
            ans.push_back(arr[left]);
            left++;

        }
        while(right<=end)
        {
            ans.push_back(arr[right]);
            right++;
        }

        for(int k=0;k<ans.size();k++)
        {
            arr[k+start]=ans[k];
        }
        return rp;
    }
    int mergesort(vector<int>& nums,int start,int end)
    {
        if(start>=end)
        return 0;

        int mid=(start+end)/2;
        int lc=mergesort(nums,start,mid);
        int rc=mergesort(nums,mid+1,end);
        int rp=merge(nums,start,mid,end);
        return lc+rc+rp;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
       int ans= mergesort(nums,0,n-1);
       return ans;

        
    }
};