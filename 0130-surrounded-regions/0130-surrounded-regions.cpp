class Solution {
public:
    void dfs(int m,int n,int i,int j,vector<vector<char>>& board,vector<vector<bool>>& visited)
    {
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]!='O'|| visited[i][j]==true)
        return;

        board[i][j]='T';
        visited[i][j]=true;

        dfs(m,n,i-1,j,board,visited);
        dfs(m,n,i,j-1,board,visited);
        dfs(m,n,i+1,j,board,visited);
        dfs(m,n,i,j+1,board,visited);

    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();

        vector<vector<bool>>visited(m,vector<bool>(n,false));

        for(int i=0;i<n;i++)
        {
            if(board[0][i]=='O')
            dfs(m,n,0,i,board,visited);
            if(board[m-1][i]=='O')
            dfs(m,n,m-1,i,board,visited);
        }

        for(int i=0;i<m;i++)
        {
            if(board[i][0]=='O')
            dfs(m,n,i,0,board,visited);
            if(board[i][n-1]=='O');
            dfs(m,n,i,n-1,board,visited);
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='T')
                board[i][j]='O';
                else if(board[i][j]=='O')
                board[i][j]='X';
            }
        }
        
    }
};