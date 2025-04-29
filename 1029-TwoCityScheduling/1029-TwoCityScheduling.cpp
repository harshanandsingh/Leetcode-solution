// Last updated: 4/29/2025, 6:16:20 PM
class Solution {
public:
    static bool cmp(vector<vector<int>>&a , vector<vector<int>>&b){
        return a[1]>b[1];
    }
    int twoCitySchedCost(vector<vector<int>>& c) {
        sort(c.begin(), c.end(), [](vector<int>& a, vector<int>& b){
            return (a[0] - a[1]) < (b[0] - b[1]);
        });

        int n = c.size() / 2;
        int sum = 0;

        // First n people go to city A
        for(int i = 0; i < n; i++) {
            sum += c[i][0];
        }

        // Last n people go to city B
        for(int i = n; i < 2 * n; i++) {
            sum += c[i][1];
        }
        return sum;
    }
};