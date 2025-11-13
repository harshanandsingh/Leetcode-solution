// Last updated: 11/13/2025, 5:30:43 PM
class Solution {
public:
    void solve(string tiles,int &count,vector<bool>&vis,vector<int>&path){
        int n = tiles.size();
        for(int i=0;i<n;i++){
            if(vis[i]) continue;
            // dont take the same element in the same level 
            if(i>0 && tiles[i]==tiles[i-1] && !vis[i-1]) continue;

            count++;
            // path.push_back()
            vis[i]=true;
            solve(tiles,count,vis,path);
            vis[i]=false;

        }
    }
    int numTilePossibilities(string tiles) {
        int count = 0;
        int n = tiles.size();
        sort(tiles.begin(),tiles.end());
        vector<bool>vis(n,false);
        vector<int>path;
        solve(tiles,count,vis,path);
        return count;
    }
};