// Last updated: 8/13/2025, 12:10:00 PM
class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if(n==0) return 1;

        vector<int>dp(n+1,0);
        dp[0]=1; // we can find in 1 way for empty string 
        if(s[0] != '0') dp[1]=1; // we can find in 1 way for string of size = 1 , when s[0] != '0
        if(n==1) return dp[n];
        // now whenever we encounter 0 we can will always get 0 as output as its not posible to decode 

        for(int i=2;i<=n;i++){
            // if s[i] != 0 we can add that charector to alrady created string -> so dp[i]+=dp[i-1];
            if(s[i-1] != '0') dp[i] += dp[i-1];
            // now if s[i-1] s[i] >= 10 and <= 26 we can add this charector in all the alrady existiong string till dp[i-2] 
            int val = stoi( s.substr(i-2,2));
            if(val >=10 && val <= 26) dp[i] += dp[i-2];
        }
        return dp[n];

        
    }
};