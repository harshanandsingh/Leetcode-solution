// Last updated: 7/18/2025, 7:29:00 AM
class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        // make adjency list -> 
        vector<vector<int>>adj(n);
        for(auto x:p){
            adj[x[1]].push_back(x[0]);
        }

        // find indegree of all the subject 
        vector<int>indegree(n,0);
        for(auto x:adj){
            for(auto y:x){
                indegree[y]++;
            }
        }

        // search for the node who have 0 indegree and push it in the queue 
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        // create one vector to store the answer 
        vector<int>ans;
        while(!q.empty()){
            int a = q.front();
            ans.push_back(a);
            q.pop();
            for(auto x:adj[a]){
                indegree[x]--;
                if(indegree[x]==0){
                    q.push(x);
                }
            }
        }

        return ans.size()==n;

    }
};