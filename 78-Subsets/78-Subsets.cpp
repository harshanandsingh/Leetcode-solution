// Last updated: 11/11/2025, 6:48:06 PM
class Solution {
public:
    struct State
    {
        int pos;
        std::vector<int> subSet;
    };

    void BackTracing(std::vector<int> &nums, std::vector<std::vector<int>> &result, State &s)
    {
        if (s.pos == nums.size())
        {
            result.push_back(s.subSet);
            return;
        }

        // select pos
        s.subSet.push_back(nums[s.pos]);
        s.pos++;
        BackTracing(nums, result, s);
        s.pos--;
        s.subSet.pop_back();

        //donot select pos
        s.pos++;
        BackTracing(nums, result, s);
        s.pos--;
    }

    std::vector<std::vector<int>> subsets(std::vector<int> &nums)
    {
        State s;
        s.pos = 0;
        std::vector<std::vector<int>> result;
        BackTracing(nums, result, s);
        return result;
    }
};