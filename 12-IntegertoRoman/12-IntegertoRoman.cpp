// Last updated: 7/3/2025, 3:45:39 PM
class Solution {
public:
    string intToRoman(int num) {
        vector<int>    val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> sym{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int n = val.size();
        string res = "";
        for (int i = 0; i < val.size(); i++) {
            while (num >= val[i]) {
                num -= val[i];
                res += sym[i];
            }
        }
        return res;
    }
};