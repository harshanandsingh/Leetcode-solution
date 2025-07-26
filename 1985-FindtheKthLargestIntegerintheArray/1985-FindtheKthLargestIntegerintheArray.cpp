// Last updated: 7/26/2025, 3:13:46 PM
class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        auto cmp = [](const string& a, const string& b) {
            if (a.size() != b.size()) return a.size() > b.size(); // shorter number is smaller
            return a > b; // lexicographically compare if same size
        };

        priority_queue<string, vector<string>, decltype(cmp)> pq(cmp);
        int n = nums.size();
        for(int i=0;i<n;i++){
            // int a = stoi(nums[i]);
            pq.push(nums[i]);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};