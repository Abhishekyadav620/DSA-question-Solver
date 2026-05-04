class Solution {
public:
    bool caneatAll(vector<int>& piles,int mid,int h)
    {
        int actualhours=0;
        for(int i=0;i<piles.size();i++)
        {
            actualhours+=(piles[i]/mid);
            if(piles[i]%mid!=0)
            actualhours++;
        }
        return actualhours<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size()-1;
        int low=1;
        int high=*max_element(piles.begin(),piles.end());

        while(low<high)
        {
            int mid=(low+high)/2;
            if(caneatAll(piles,mid,h))
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
        
    }
};