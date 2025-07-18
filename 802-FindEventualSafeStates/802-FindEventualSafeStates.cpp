// Last updated: 7/18/2025, 8:25:26 AM
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        // find the size of the graph 
        int n = graph.size();

        // find the outgoing edge from the graph 
        vector<int>out(n,0);
        for(int i=0;i<n;i++){
            out[i] = graph[i].size();
        }

        // create which all is conected by whome 
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<graph[i].size();j++){
                adj[graph[i][j]].push_back(i);
            }
        }

        //find the node with outging edge 0
        queue<int>q;
        for(int i=0;i<n;i++){
            if(out[i]==0) q.push(i);
        }
        // create one answer array to store the answer 
        vector<int>ans;
        while(!q.empty()){
            int a = q.front();
            ans.push_back(a);
            q.pop();

            for(auto x:adj[a]){
                out[x]--;
                if(out[x]==0) q.push(x);
            }
        }

        sort(ans.begin(),ans.end());
        return ans;

    }
};