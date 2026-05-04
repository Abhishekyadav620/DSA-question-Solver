class Solution {
public:
    int canBloom(vector<int>& bloomDay, int mid, int k)
    {
        int consecutive_count=0;
        int bouquets_count=0;

        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=mid)
            {
                consecutive_count++;
            }
            else
            {
                consecutive_count=0;
            }
            if(consecutive_count==k)
            {
                bouquets_count++;
                consecutive_count=0;
            }
        }
        return bouquets_count;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int low=1;
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int result=-1;
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(canBloom(bloomDay,mid,k)>=m)
            {
                result=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }

        }
        return result;
        
    }
};