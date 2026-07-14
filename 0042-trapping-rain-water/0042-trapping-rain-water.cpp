class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax(n);
        vector<int>rightmaxx(n);
        int lmaxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            lmaxx=max(lmaxx,height[i]);
            leftmax[i]=lmaxx;
            
        }
        int rmaxx=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            rmaxx=max(rmaxx,height[i]);
            rightmaxx[i]=rmaxx;
           
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int h=min(rightmaxx[i],leftmax[i])-height[i];
            sum+=h;

        }
        return sum;
        
    }
};