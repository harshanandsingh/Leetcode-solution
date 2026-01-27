// Last updated: 1/27/2026, 11:20:22 AM
1class Solution {
2public:
3    unordered_map<string, bool> dp;
4    bool con(string &word,unordered_set<string>&s){
5
6        if (dp.count(word)) return dp[word];
7
8        int n = word.size();
9        for(int i=1;i<n;i++){ // start form 1 so that suffix will nevet be "" and will not go in infinit loop 
10
11            string prefix = word.substr(0,i);
12            string suffix = word.substr(i);
13
14            if(s.count(prefix) && ( s.count(suffix) ||con(suffix,s) ) ) return dp[word] = true;
15        }
16        return dp[word] = false;
17    }
18    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
19        
20        unordered_set<string>s(words.begin(),words.end());// easy to find the words 
21        vector<string>res;
22
23        int n = words.size();
24        for(auto x:words){
25            if(con(x,s)) res.push_back(x);
26        }
27        return res;
28
29    }
30};