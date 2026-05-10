// Last updated: 5/10/2026, 8:24:21 AM
1class Solution {
2public:
3    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
4
5        string s = "";
6        for(auto &x : chunks){
7            s+= x;
8        }
9
10        unordered_map<string,int>wordfrq;
11        int n = s.size();
12        string cur_word = "";
13        for(int i=0;i<n;i++){
14            if(islower(s[i])){
15                cur_word +=s[i];
16            }else if( s[i] =='-'){
17                if(i>0 && i<n-1 && islower(s[i-1]) && islower(s[i+1])){
18                    cur_word += s[i];
19                }else{
20                    if(!cur_word.empty()){
21                        wordfrq[cur_word]++;
22                        cur_word = "";
23                    }
24                }
25                
26            }else{
27                if(!cur_word.empty()){
28                    wordfrq[cur_word]++;
29                    cur_word = "";
30                }
31            }
32        }
33        if(!cur_word.empty()) wordfrq[cur_word]++;
34
35        vector<int>ans;
36        for(auto &x :queries){
37            if(wordfrq.count(x)){
38                ans.push_back(wordfrq[x]);
39            }else{
40                ans.push_back(0);
41            }
42        }
43
44        return ans;
45
46
47
48        
49    }
50};