class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>>adj(numCourses);

        for(int i=0;i<prerequisites.size();i++)
        {
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            adj[v].push_back(u);
        }

        vector<int>Indegree(numCourses,0);

        for(int i=0;i<numCourses;i++)
        {
            for(int j=0;j<adj[i].size();j++)
            {
                int v=adj[i][j];
                Indegree[v]++;
            }
        }

        queue<int>q;
        for(int i=0;i<numCourses;i++)
        {
            if(Indegree[i]==0)
            q.push(i);
        }
        int count=0;

        while(!q.empty())
        {
            int k=q.front();
            q.pop();
            count++;

            for(int i=0;i<adj[k].size();i++)
            {
                int v=adj[k][i];
                Indegree[v]--;

                if(Indegree[v]==0)
                q.push(v);
            }
        }
        if(count==numCourses)
        return true;

        return false;
        
    }
};