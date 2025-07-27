// Last updated: 7/27/2025, 8:31:23 AM
class Solution {
public:
    int numberOfAlternatingGroups(vector<int> colors, int k) {
        int n = colors.size();
        int count = 0;

        int j = 1,i=0;
        while(j < n + k - 1) {
            if (colors[j % n] == colors[(j - 1) % n]) {
                i = j;
            }
            if (j - i + 1 == k) {
                count++;
                i++;  // move window forward
            }
            j++;
        }

        return count;
    }
};