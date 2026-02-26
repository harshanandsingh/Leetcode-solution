// Last updated: 2/26/2026, 3:51:28 PM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        int n = strs.size();
5
6        //to store the occurance 
7        unordered_map<string,vector<string>>m;
8        // unordered_map<vector<int>,vector<string>>m; map will not allow vector as key 
9
10        for(int i = 0;i < n; i++){
11            vector<int>v(26,0);// to count the frequecy of each element 
12            for(auto s:strs[i]){
13                v[s - 'a']++;
14            }
15            // now once we have frequecy of each charector in the ith string we will create a key 
16            string key = ""; //to_string(v[0]);
17            for(int j=0;j<26;j++){
18                key+=","+ to_string(v[j]);
19            }
20            // this key is same for all the anagram 
21            m[key].push_back(strs[i]);
22            // m[v].push_back(strs[i]);
23        }
24
25        //now once we have the group of anagram -> we will create a vector of vector to give the result back 
26        vector<vector<string>>ans;
27        for(auto x:m){
28            ans.push_back(x.second);
29        }
30        return ans;
31    }
32};