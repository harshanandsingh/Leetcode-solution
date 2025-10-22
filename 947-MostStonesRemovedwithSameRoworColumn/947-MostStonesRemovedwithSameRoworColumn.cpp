// Last updated: 10/22/2025, 9:38:49 AM
class Solution {
public:
    void dfs(vector<vector<int>>& stones,vector<bool>&vis,int index){
        vis[index]=true;// make this node visited 

        for(int i=0;i<stones.size();i++){
            int row = stones[i][0];
            int col = stones[i][1];
            if(!vis[i] && (stones[index][0]==row || stones[index][1] == col)){
                dfs(stones,vis,i);
            }
        }

    }
    int removeStones(vector<vector<int>>& stones) {
        // why dfs will work... first observe that all the node which is in same row and same column are in a same group
        // and after removing element , in each group we left with one node always 
        // so answer = n - no of group 
        // now how to find group -> run dfs and all the node wich are in same row and same column -> comes in a same group 

        int n = stones.size();
        vector<bool>vis(n,false);
        int group = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(stones,vis,i);
                group++;
            }
        }
        return n-group;

    }
};