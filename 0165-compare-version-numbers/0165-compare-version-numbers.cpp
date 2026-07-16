class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream ss1(version1);
        string words1;
        vector<string>ans1;

        while(getline(ss1,words1,'.'))
        {
            ans1.push_back(words1);

        }


        stringstream ss2(version2);
        string words2;
        vector<string>ans2;

        while(getline(ss2,words2,'.'))
        {
            ans2.push_back(words2);

        }
        int n=max(ans1.size(),ans2.size());
        for(int i=0;i<n;i++)
        {
            int x=(i<ans1.size())?stoi(ans1[i]):0;
            int y=(i<ans2.size())?stoi(ans2[i]):0;

            if(x<y)
            return -1;

            else if(x>y)
            return 1;


            
        }
        return 0;



    }
};