// Last updated: 8/18/2025, 8:52:05 AM
class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<long long, int> mp;
        int maxEdges = 0;
        for (auto &row : wall) {
            long long sum = 0;
            for (int i = 0; i < row.size() - 1; i++) {
                sum += row[i];
                mp[sum]++;
                maxEdges = max(maxEdges, mp[sum]);
            }
        }
        return wall.size() - maxEdges;
    }
};
