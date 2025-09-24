// Last updated: 9/24/2025, 11:55:25 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;
        for(auto x:nums1){
            s.insert(x);
        }
        vector<int>ans;
        for(auto x:nums2){
            if(s.count(x)){
                ans.push_back(x);
                s.erase(x);
            }
        }
        return ans;
    }
};