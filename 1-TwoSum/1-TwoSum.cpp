// Last updated: 7/26/2025, 8:17:19 AM
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(std::vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int n = nums.size();
        vector<int>v;

        for(int i=0;i<n;i++){
            if(m.find(target-nums[i]) != m.end()) return {m[target-nums[i]],i};
            m[nums[i]]=i;
        }
        return {};
        
    }
};
