// Last updated: 7/18/2025, 10:53:36 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.length() != t.length() ) return false;
        // unordered_map<char,int>m;
        // for(char c:s){
        //     m[c]++;
        // }
        // for(char c:t){
        //     if(m[c]) m[c]--;
        //     else return false;
        // }
        // return true;

        if(s.size()!=t.size()) return false;
        vector<int>v(26,0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(v[i]) return false;
        }
        return true;
    }
};