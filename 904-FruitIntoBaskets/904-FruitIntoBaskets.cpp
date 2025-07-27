// Last updated: 7/27/2025, 10:10:03 AM
class Solution {
public:
    int totalFruit(vector<int>& v) {
        int n = v.size();
        int last = -1, second_last = -1;
        int last_count = 0, curr_max = 0, max_total = 0;

        for(int i = 0; i < n; i++) {
            if(v[i] == last || v[i] == second_last) {
                curr_max++;
            } else {
                curr_max = last_count + 1;
            }

            if(v[i] == last) {
                last_count++;
            } else {
                last_count = 1;
                second_last = last;
                last = v[i];
            }

            max_total = max(max_total, curr_max);
        }

        return max_total;
    }
};
