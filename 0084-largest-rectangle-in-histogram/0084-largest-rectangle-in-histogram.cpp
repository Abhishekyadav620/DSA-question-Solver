class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        int n=height.size();

        vector<int>right(n);
        stack<int>st1;

        for(int i=n-1;i>=0;i--)
        {
            while(!st1.empty() && height[st1.top()]>=height[i])
            {
                st1.pop();
            }
            right[i]=st1.empty()?n:st1.top();
            st1.push(i);
        }

        vector<int>left(n);
        stack<int>st2;
        for(int i=0;i<n;i++)
        {
            while(!st2.empty() && height[st2.top()]>=height[i])
            {
                st2.pop();
            }
            left[i]=st2.empty()?-1:st2.top();
            st2.push(i);
        }
        int maxxarea=0;

        for(int i=0;i<n;i++)
        {
            
            maxxarea=max(maxxarea,height[i]*(right[i]-left[i]-1));
        }
        return maxxarea;
        
    }
};