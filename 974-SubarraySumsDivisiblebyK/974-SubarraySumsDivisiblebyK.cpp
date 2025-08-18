// Last updated: 8/18/2025, 11:29:42 AM
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int prefixMod = 0;
        vector<int> r(k+1);
        int res = 0;
        r[0] = 1;
        for(int n: nums) {
            prefixMod = (prefixMod + n %k + k) % k;
            res += r[prefixMod];
            r[prefixMod]++;
        }
        return res;
    }
};