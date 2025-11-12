// Last updated: 11/12/2025, 6:45:33 PM
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits(n + 1); // size n + 1 vector
        int set_bits = 0;
        bits[0] = 0;

        for (int i = 1; i <= n; ++i) {
            bits[i] = bits[i >> 1] + (i & 1);
        }
        return bits;

    }
};