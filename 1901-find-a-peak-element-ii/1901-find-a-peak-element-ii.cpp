class Solution {
public:

    int colIdx(vector<int>& row)
    {
        int n = row.size();

        int mx = INT_MIN;
        int ans = -1;

        for(int i = 0; i < n; i++)
        {
            if(mx < row[i])
            {
                mx = row[i];
                ans = i;
            }
        }

        return ans;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int n = mat.size();

        int left = 0;
        int right = n - 1;

        while(left <= right)
        {
            int mid = (left + right) / 2;

            // maximum value is present at which column
            int col = colIdx(mat[mid]);

            int up =
            (mid == 0)
            ? -1
            : mat[mid - 1][col];

            int down =
            (mid == n - 1)
            ? -1
            : mat[mid + 1][col];

            // Peak found
            if(mat[mid][col] > up &&
               mat[mid][col] > down)
            {
                return {mid, col};
            }

            // Move upward
            else if(mat[mid][col] < up)
            {
                right = mid - 1;
            }

            // Move downward
            else
            {
                left = mid + 1;
            }
        }

        return {-1, -1};
    }
};