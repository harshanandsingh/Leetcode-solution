// Last updated: 4/29/2025, 5:38:28 PM
class Solution {
public:
    // static bool cmp(vector<vector<int>>&a , vector<vector<int>>&b ){
    //     return a[2] < b[2];
    // }
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> timeline(1001, 0); // since location range is [0, 1000]

        for (auto& trip : trips) {
            int num = trip[0], start = trip[1], end = trip[2];
            timeline[start] += num; // pick up
            timeline[end] -= num;   // drop off
        }

        int curr = 0;
        for (int i = 0; i <= 1000; i++) {
            curr += timeline[i];
            if (curr > capacity)
                return false;
        }

        return true;
    }
};