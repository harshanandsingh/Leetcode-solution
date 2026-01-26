// Last updated: 1/26/2026, 10:54:18 PM
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4       
5        // if(s.size() != goal.size()) return false;
6        // s=s+s;
7        // if(s.find(goal) != std::string::npos) return true;
8        // return false;
9
10        // ---------- or --------
11        if(s.size() != goal.size()) return false;
12        if(s==goal) return true;
13        int n = s.size();
14        for(int i=1;i<n;i++){
15            string t = s.substr(i)+s.substr(0,i);
16            //cout<<t<<endl;
17            if(goal==t) return true;
18        }
19        return false;
20    }
21
22};