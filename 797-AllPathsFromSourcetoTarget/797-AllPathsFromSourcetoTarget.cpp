// Last updated: 10/22/2025, 6:09:02 PM
class Solution {
public:
    void dfs(vector<vector<int>>&ans,vector<vector<int>>& graph,int start ,vector<int>&vis, vector<int>&sub_ans){
        sub_ans.push_back(start);
        vis[start]=1;
        if(start == graph.size()-1){
            ans.push_back(sub_ans);
            sub_ans.pop_back();
            vis[start]=0;
            return;
        }

        for(auto x:graph[start]){
            if(!vis[x]){
                dfs(ans,graph,x,vis,sub_ans);
            }
        }
        vis[start]=0;
        sub_ans.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        // this question is of backtracking and dfs 
        int n = graph.size();
        vector<vector<int>>ans; // the final answer to return 
        vector<int>vis(n,0);
        vector<int>sub_ans;
        dfs(ans,graph,0,vis,sub_ans);
        return ans;
    }
};