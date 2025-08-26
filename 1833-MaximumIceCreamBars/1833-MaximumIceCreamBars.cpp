// Last updated: 8/26/2025, 11:07:57 PM
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxCost = 0;
        for (int& i : costs) maxCost = max(maxCost, i);
        vector<int> tally(maxCost + 1, 0);
        for (int& i : costs) tally[i]++;
        int result = 0;
        int i = 1;
        while (i <= maxCost && i <= coins){
            if (tally[i]){
                tally[i]--;
                result++;
                coins -= i;
                //cout << i << endl;
            }
            else i++;
        }
        return result;
    }
};