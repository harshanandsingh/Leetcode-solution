// Last updated: 1/27/2026, 10:43:15 PM
1class Solution {
2public:
3    bool vov(char ch){
4        string s = "aeiouAEIOU";
5        if(s.find(ch) != string::npos) return true;
6        return false;
7    }
8    int maxVowels(string s, int k) {
9        int n = s.size();
10        int count = 0;
11        for(int i=0;i<k;i++){
12            if(vov(s[i])) count++;
13        }
14        int max_res = count;
15        for(int i=k;i<n;i++){
16            if(vov(s[i-k])) count--;
17            if(vov(s[i])) count++;
18            max_res = max(max_res,count);
19        }
20        return max_res;
21    }
22};