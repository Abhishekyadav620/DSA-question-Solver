class Solution {
public:
   bool cantrip(vector<int>& time,long long mid,int totalTrips)
   {
    long long actual=0;
    for(int i=0;i<time.size();i++)
    {
        actual+=(mid/time[i]);
        
    }
    if(actual>=totalTrips)
    return true;

    else
    return false;
   }
    
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n=time.size();
         long long low=1;
        long long high=1LL* *min_element(time.begin(),time.end())*totalTrips*1LL;

        while(low<high)
        {
            long long mid=(low+high)/2;
            if(cantrip(time,mid,totalTrips))
            high=mid;
            else
            low=mid+1;
        }
        return low;
        
    }
};