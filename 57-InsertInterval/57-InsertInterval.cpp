// Last updated: 9/10/2025, 3:13:27 PM
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intv, vector<int>& ni) {
        vector<vector<int>> ans;
        int i = 0, n = intv.size();

        // 1. add all intervals before new interval
        while (i < n && intv[i][1] < ni[0]) {
            ans.push_back(intv[i]);
            i++;
        }

        // 2. merge overlapping intervals
        while (i < n && intv[i][0] <= ni[1]) {
            ni[0] = min(ni[0], intv[i][0]);
            ni[1] = max(ni[1], intv[i][1]);
            i++;
        }
        ans.push_back(ni);

        // 3. add remaining intervals
        while (i < n) {
            ans.push_back(intv[i]);
            i++;
        }

        return ans;

        // too bad approch -> worst
        // int n = intv.size();
        // vector<vector<int>>ans ;
        // bool added = false;

        // for(auto x:intv){
        //     // if old_ start >= new_ start and old_ end <= new end  continue;
        //     if(x[0]>= ni[0] && x[1] <= ni[1]) continue;

        //     if( x[0] <= ni[0]   && x[1] <= ni[1]){
        //         ni[0]=x[0];
        //         continue;
        //     }

        //     if(ni[1]>= x[0] && ni[0]<x[0] && ni[1]<x[1]){
        //         ni[1]=x[1];
        //         continue;
        //     }
        //     if(!added){
        //         ans.push_back(ni);
        //         added = true;
        //     }
        //     ans.push_back(x);
        // }
        // return ans;

    }
};