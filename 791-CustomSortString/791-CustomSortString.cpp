// Last updated: 7/29/2025, 3:08:15 PM
class Solution {
public:

    static string str;

    static bool compare(char ch1, char ch2){
        return str.find(ch1) < str.find(ch2);
    }

    string customSortString(string order, string s) {
        str = order;
        sort(s.begin(), s.end(), compare);
        return s;
    }
};
string Solution::str;