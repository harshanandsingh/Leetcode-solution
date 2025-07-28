// Last updated: 7/28/2025, 2:48:49 PM
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string new_s = "";
        
        int t = 0; // pointer for spaces

        for (int j = 0; j < s.size(); ++j) {
            if (t < spaces.size() && j == spaces[t]) {
                new_s += " ";
                t++;
            }
            new_s += s[j];
        }

        return new_s;
    }
};