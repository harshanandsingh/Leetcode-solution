// Last updated: 9/11/2025, 1:15:39 AM
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<int>vis(n*n+1,0);
        for(auto x:grid){
            for(auto y:x){
                vis[y]++;
            }
        }
        int two_times ,mis; 
        for(int i=1;i<=n*n;i++){
            if(vis[i]==2) two_times = i;
            else if(!vis[i]) mis = i;
        }
        return {two_times,mis};
    }
};