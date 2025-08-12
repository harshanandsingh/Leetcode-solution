// Last updated: 8/12/2025, 10:00:33 PM
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> lossCount;
        vector<vector<int>> answer(2);

        // Step 1: Count losses
        for (auto& match : matches) {
            int winner = match[0];
            int loser = match[1];

            // Ensure winner is in map with 0 losses if not present
            if (lossCount.find(winner) == lossCount.end()) {
                lossCount[winner] = 0;
            }

            // Increment loser's loss count
            lossCount[loser]++;
        }

        // Step 2: Classify players
        for (auto& [player, losses] : lossCount) {
            if (losses == 0) {
                answer[0].push_back(player);
            } else if (losses == 1) {
                answer[1].push_back(player);
            }
        }

        // Step 3: Sort both result lists
        sort(answer[0].begin(), answer[0].end());
        sort(answer[1].begin(), answer[1].end());

        return answer;
    }
};
