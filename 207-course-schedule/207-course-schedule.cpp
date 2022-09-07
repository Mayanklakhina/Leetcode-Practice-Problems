class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        queue<int> q;
        vector<int> indegree(numCourses,0);
            
        vector<int> adj[numCourses];         // adj list        
        int edges = prerequisites.size();
        for(int i = 0;i<edges;i++){
            int u = prerequisites[i][0];
            int v = prerequisites[i][1];
            adj[v].push_back(u);
        }
            
        for(int i=0;i<numCourses;i++){
        for(auto it : adj[i]){
            indegree[it]++;
        }
    }
    
    for(int i = 0; i<numCourses; i++){
        if(indegree[i] == 0)
        q.push(i);
    }
    int count = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        count++;
        for(auto it : adj[node]){
            indegree[it]--;
            
            if(indegree[it] == 0){
                q.push(it);
            }
        }
    }
    if(count == numCourses) return true;
    return false;
    }
};