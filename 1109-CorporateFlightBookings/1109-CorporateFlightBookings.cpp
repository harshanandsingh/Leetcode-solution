// Last updated: 4/30/2025, 9:49:20 AM
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n + 2, 0);  // 1-based indexing and extra space

        // Step 1: Use a difference array
        for (auto& x : bookings) {
            int first = x[0];
            int last = x[1];
            int seats = x[2];

            ans[first] += seats;
            ans[last + 1] -= seats;
        }

        // Step 2: Convert difference array to prefix sum
        for (int i = 1; i <= n; ++i) {
            ans[i] += ans[i - 1];
        }

        // Step 3: Ignore index 0 and trim result
        //ans.resize(n + 1);  // Only keep indices 1 to n
        return vector<int>(ans.begin() + 1, ans.end()-1);

    }
};