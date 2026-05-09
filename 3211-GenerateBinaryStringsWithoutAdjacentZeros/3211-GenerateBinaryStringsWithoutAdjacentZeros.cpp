// Last updated: 5/9/2026, 5:24:28 PM
1class Solution {
2public:
3    vector<string>ans;
4    void result(string &s, int n){
5        // 1. Correct Base Case
6        if (s.size() == n) {
7            ans.push_back(s);
8            return; // Must return here!
9        }
10
11        // 2. Choice 1: Add '1'
12        s.push_back('1');
13        result(s, n);
14        s.pop_back(); // Backtrack
15
16        // 3. Choice 2: Add '0'
17        if (s.empty() || s.back() == '1') {
18            s.push_back('0');
19            result(s, n);
20            s.pop_back();
21        }
22
23        // if(s.size()==n){ // basecase 
24        //     ans.push_back(s);
25        //     return;
26        // }
27
28        // if(s.empty()){ // only one element 
29        //     s.push_back('1');
30        //     result(s,n);
31        //     s.pop_back();
32        //     s.push_back('0');
33        //     result(s,n);
34        //     return;
35        // }
36
37        // if(s[s.size()-1]=='1' || s.size()==1){
38        //     s+='1';
39        //     result(s,n);
40        //     s.pop_back();
41        //     s+='0';
42        //     result(s,n);
43        // }
44    }
45    vector<string> validStrings(int n) {
46        string s="";
47        result(s,n);
48        return ans;
49    }
50};