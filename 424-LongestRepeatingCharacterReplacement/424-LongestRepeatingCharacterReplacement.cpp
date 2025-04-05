// Last updated: 4/5/2025, 12:14:44 PM
class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0, j = 0, maxFreq = 0, maxLen = 0;
        unordered_map<char, int> count;

        while (j < s.size()) {
            count[s[j]]++;
            maxFreq = max(maxFreq, count[s[j]]);

            // If changes needed > k, shrink from left
            if ((j - i + 1) - maxFreq > k) {
                count[s[i]]--;
                i++;
            }

            maxLen = max(maxLen, j - i + 1);
            j++;
        }

        return maxLen;
    }
};