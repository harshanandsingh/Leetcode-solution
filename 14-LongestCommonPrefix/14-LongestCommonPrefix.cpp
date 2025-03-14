class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       if (strs.empty()) return "";  // Handle empty vector case
        if (strs.size() == 1) return strs[0];

        string prefix = strs[0]; // Start with the first string as the prefix

        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
                j++;
            }
            prefix = prefix.substr(0, j); // Trim prefix to match current string
            if (prefix.empty()) return ""; // If no common prefix exists, return immediately
        }

        return prefix;
    }
};