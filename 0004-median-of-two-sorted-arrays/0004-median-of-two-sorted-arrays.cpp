class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();

        int i=0;
        int j=0;

        vector<int>arr;
        int k=0;

        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                arr.push_back(nums1[i]);
                i++;
                k++;
            }
            else
            {
                arr.push_back(nums2[j]);
                j++;
                k++;
            }
        }
        if(j==nums2.size())
        {
            while(i!=nums1.size())
            {
                arr.push_back(nums1[i]);
                i++;
                k++;
            }
        }
        if(i==nums1.size())
        {
            while(j!=nums2.size())
            {
                arr.push_back(nums2[j]);
                j++;
                k++;
            }
        }
        double ans=-1;

        if(arr.size()%2!=0)
        {
           ans=arr[arr.size()/2];
        }
        else
        {
           ans = (arr[(arr.size()/2)-1] + arr[arr.size()/2]) / 2.0;

        }
        return ans;
        
    }
};