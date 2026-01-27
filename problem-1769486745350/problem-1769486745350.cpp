// Last updated: 1/27/2026, 9:35:45 AM
1class Solution {
2public:
3    vector<string>res;
4    bool valid(string s){
5        int a = stoi(s);
6        if(s.size()>3 || (a>255 || a<0)) return false;
7        if(s[0]=='0') return false;
8        return true;
9    }
10    void help(string &s,int pat,int i,string str){
11        if(i==s.size() && pat ==4){
12            str.pop_back(); // remove last .
13            res.push_back(str);
14            return;
15        }
16        if(pat >= 4) return;
17
18        if(i+1<=s.size()){
19            help(s,pat+1,i+1,str+(s.substr(i,1))+".");
20        }
21        
22        if(i+2<=s.size() && valid(s.substr(i,2)) ){
23            help(s,pat+1,i+2,str+(s.substr(i,2))+".");
24        }
25        if(i+3<=s.size() && valid(s.substr(i,3))){
26            help(s,pat+1,i+3,str+(s.substr(i,3)+"."));
27        }
28    }
29    vector<string> restoreIpAddresses(string s) {
30        if(s.size()>12) return {};
31
32        int pat = 0, i = 0;
33        string str="";
34        help(s,pat,i,str);
35        return res;
36    }
37};