// Last updated: 4/26/2026, 8:35:08 AM
1class Solution {
2public:
3    string sortVowels(string s) {
4        // find the frequency of all the vovels 
5        unordered_map<char,int>freq;
6        unordered_map<char,int>first_pos;
7        string vowel = "";
8        string target = "aeiou";
9        for(auto x:target) first_pos[x]=-1;
10        for(int i=0;i<s.size();i++){
11            if(first_pos.count(s[i])){
12                freq[s[i]]++;
13                if(first_pos[s[i]] == -1){
14                    first_pos[s[i]] = i;
15                }
16            }
17        }
18        vector<char>vow;
19        for(int i =0;i<s.size();i++){
20            if(first_pos.count(s[i])) vow.push_back(s[i]);
21        }
22
23        sort(vow.begin(),vow.end(),[&](char a,char b){
24            if(freq[a] != freq[b]){
25                return freq[a] > freq[b];
26            }
27            return first_pos[a] < first_pos[b];
28        });
29        string result = s;
30        int vowel_idx = 0;
31        for(int i=0;i<s.size();i++){
32            if(first_pos.count(s[i])){
33                result[i] = vow[vowel_idx++];
34            }
35        }
36        return result;
37    }
38};