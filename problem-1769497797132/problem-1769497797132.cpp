// Last updated: 1/27/2026, 12:39:57 PM
1class Solution {
2public:
3    unordered_set<string>st;
4    unordered_map<string,bool>m;
5    bool cmp(string s){
6        if(m.count(s)) return m[s];
7        int n = s.size();
8        for(int i=1;i<=n;i++){ // prefix and suffix should not be "" to couse infinite recurtion 
9            string prefix = s.substr(0,i);
10            string suffix = s.substr(i);
11
12            if( st.count(prefix) && (suffix.empty() || st.count(suffix) || cmp(suffix)) ) return m[s] = true;
13        }
14        return m[s] = false;
15    }
16    bool wordBreak(string s, vector<string>& wordDict) {
17        // we can do this in the same way word break in prefix and suffix
18        if(s.empty()) return false; 
19        st = unordered_set<string>(wordDict.begin(),wordDict.end());
20
21        return cmp(s);
22    }
23};