class Solution {
public:
    void dfs(vector<int>adj[],vector<bool>&vis,int src){
        vis[src]=1;
        for(auto x:adj[src]){
            if(vis[x]==0)
                dfs(adj,vis,x);
        }
    }
    int findCircleNum(vector<vector<int>>& v) {
        int n=v.size();
        vector<int>adj[n];
        vector<bool>visited(n,0);
        for(int i=0;i<n;i++){   // conversion into adjacent matrix
            for(int j=0;j<n;j++){
                if(v[i][j]==1)
                    adj[i].push_back(j);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                ans++;
                dfs(adj,visited,i);
            }
         }
       return ans;
    }
};