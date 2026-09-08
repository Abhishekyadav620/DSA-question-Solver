class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();

        vector<int>leftmaxx(n);
        vector<int>rightmaxx(n);

        int leftmaxxx=INT_MIN;

        for(int i=0;i<n;i++)
        {
            leftmaxxx=max(leftmaxxx,height[i]);
            leftmaxx[i]=leftmaxxx;
        }
         int rightmaxxx=INT_MIN;

        for(int i=n-1;i>=0;i--)
        {
            rightmaxxx=max(rightmaxxx,height[i]);
            rightmaxx[i]=rightmaxxx;
        }
        int sum=0;

        for(int i=0;i<n;i++)
        {
            int h=min(leftmaxx[i],rightmaxx[i])-height[i];
            sum+=h;
        }
        return sum;
        
    }
};