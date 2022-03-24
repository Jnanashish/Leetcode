class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans;
        vector<int> adj[numCourses];
        vector<int> indegree(numCourses, 0);
        
        for(int i = 0; i<prerequisites.size(); i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indegree[prerequisites[i][0]]++;
        }
        
        queue<int> q;
        for(int i = 0; i<indegree.size(); i++){
            if(indegree[i] == 0)
                q.push(i);
        }
        
        while(!q.empty()){
            int f = q.front();
            q.pop();
            ans.push_back(f);
            
            for(int i = 0; i<adj[f].size(); i++){
                cout << adj[f][i]<<" ";
                indegree[adj[f][i]] = indegree[adj[f][i]]-1;
                if(indegree[adj[f][i]] == 0)
                    q.push(adj[f][i]);
            }
        }
        vector<int> v;
        if(ans.size() != numCourses)
            return v;
        
        return ans;
    }
};