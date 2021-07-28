886. Possible Bipartition

class Solution {
public:
    bool isbipertite(vector<vector<int>> &adj,vector<int> &color,int cur,int n)
    {
        queue<int> q;
        q.push(cur);
        color[cur]=1;
        while(!q.empty())
        {
            int current = q.front();
            q.pop();
            for(auto x : adj[current])
            {
                if(color[current]==color[x])
                    return false;
                if(color[x]==-1)
                {
                    color[x] = 1-color[current];
                    q.push(x);
                }
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> adj(n+1);
        //vector<int> adj[n+1];
        for(int i=0;i<dislikes.size();i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        
        vector<int> color(n+1,-1);
        for(int i=1;i<=n;i++)
        {
            if(color[i]==-1)
            {
                if(!isbipertite(adj,color,i,n))
                    return false;
            }
        }
        return true;
    }
};