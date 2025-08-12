// Last updated: 8/12/2025, 9:50:21 PM
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& arr) {

        int n = arr.size();
        unordered_set<int>s;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i][1]]++;
            s.insert(arr[i][0]);
        }
        vector<vector<int>>ans(2);
        for(auto x:m){
            if(x.second == 1) ans[1].push_back(x.first);
            if(s.count(x.first)) s.erase(x.first);
        }
        for(auto x:s){
            ans[0].push_back(x);
        }
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        return ans;
    }
};