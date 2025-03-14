#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map; // Maps number to its index
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i}; // Found the pair
            }
            num_map[nums[i]] = i; // Add the number and its index to the map
        }
        return {}; // Return an empty vector if no pair is found

        // unordered_set<int>s;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int dif = target - nums[i];
        //     if(s.find(dif)!=s.end()) return true;
        //     s.insert(dif);
        // }
        // return false;
    }
};
