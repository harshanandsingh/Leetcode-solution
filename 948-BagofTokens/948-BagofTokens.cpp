// Last updated: 4/2/2026, 2:19:19 PM
1class Solution {
2public:
3    int bagOfTokensScore(vector<int>& tokens, int power) {
4
5        sort(tokens.begin(),tokens.end());
6        int i = 0 , j = tokens.size()-1;
7        int ans = 0,max_ans= 0;
8        while(i<=j){
9            if(power>=tokens[i]){
10                power-=tokens[i++];
11                ans++;
12            }else{
13                if(ans == 0 ) return max_ans;
14                ans--;
15                power+=tokens[j--];
16            }
17            max_ans = max(max_ans,ans);
18
19        }
20        return max_ans;
21
22    }
23};