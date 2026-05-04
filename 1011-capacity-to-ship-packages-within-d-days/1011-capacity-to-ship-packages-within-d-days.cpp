class Solution {
public:
    int canShip(vector<int>& weight,int mid)
    {
        int sum=0;
        int day=1;
        int maxx=INT_MIN;
        for(int i=0;i<weight.size();i++)
        {
            if(sum+weight[i]<=mid)
            {
                sum+=weight[i];
            }
            else
            {
                day++;
                sum=weight[i];
            }
            
           
            
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        // int low=0;
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int i=0;i<weights.size();i++)
        {
            high+=weights[i];
        }
        int ans=-1;

        while(low<=high)
        {
            int mid=(low+high)/2;
            if(canShip(weights,mid)<=days)
            {
            high=mid-1;
            ans=mid;
            }
            else
            low=mid+1;
            
        }
        return ans;
        
    }
};