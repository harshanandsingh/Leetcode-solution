// Last updated: 11/12/2025, 11:11:53 PM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor_all = 0;
        for (int& num : nums) {
            xor_all ^= num;
        }

        int diff_bit = 1;
        while ((xor_all & diff_bit) == 0) {
            diff_bit <<= 1;
        }

        int a = 0, b = 0;
        for (int& num : nums) {
            if (num & diff_bit) {
                a ^= num;
            } else {
                b ^= num;
            }
        }
        return {a, b};
    }
};