// Last updated: 11/12/2025, 12:13:11 AM
class Solution {
public:
    void combinationSum(int index, vector<int>& candidates, int target,
                        vector<vector<int>>& ans, vector<int>& temp) {
        if (index == candidates.size()) {
            if (target == 0) {
                ans.push_back(temp);
            }
            return;
        }
        if (candidates[index] <= target) {
            temp.push_back(candidates[index]);
            combinationSum(index, candidates, target - candidates[index], ans,
                           temp);
            temp.pop_back();
        }
        combinationSum(index + 1, candidates, target, ans,
                       temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        combinationSum(0, candidates, target, ans, temp);
        return ans;
    }
};