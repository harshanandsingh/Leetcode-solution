// Last updated: 7/20/2026, 10:29:56 AM
1class Solution {
2public:
3    int bagOfTokensScore(vector<int>& tokens, int power) {
4        sort(tokens.begin(),tokens.end());
5        int n = tokens.size();
6        int i = 0 , j = n-1;
7        int score = 0;
8        int ans = 0;
9        while(i <= j){
10            if(tokens[i]<=power){
11                power-=tokens[i];
12                score++;
13                i++;
14            }else{
15                if(score >=1){
16                    score--;
17                    power+=tokens[j--];
18                }else{
19                    break;
20                }
21            }
22            ans = max(score,ans);
23        }
24        return ans;
25    }
26};