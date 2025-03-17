class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        std::unordered_map<char, char> map_s_to_t;
        std::unordered_map<char, char> map_t_to_s;

        for (size_t i = 0; i < s.size(); ++i) {
            char s_char = s[i];
            char t_char = t[i];

            if (map_s_to_t.find(s_char) == map_s_to_t.end()) {
                map_s_to_t[s_char] = t_char;
            } else {
                if (map_s_to_t[s_char] != t_char) {
                    return false;
                }
            }

            if (map_t_to_s.find(t_char) == map_t_to_s.end()) {
                map_t_to_s[t_char] = s_char;
            } else {
                if (map_t_to_s[t_char] != s_char) {
                    return false;
                }
            }
        }
        return true;
    }
};