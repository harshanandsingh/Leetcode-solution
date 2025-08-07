// Last updated: 8/7/2025, 10:47:53 AM
class Solution {
public:

    // table filling method 
    int longestCommonSubsequence(string text1, string text2) {

        int n , m ; n = text1.size(); m = text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));

        // base case -> if any of the string reaches its size -> then you can't find the answer 
        // i == 0 or j == dp[i][j] = 1;

        // now if t1[i-1]==t2[j-1] then both the element are same -> 1 + dp[i-1][j-1] ( as when t1[i] == t2[j] then we
        // move one step forword to next element i+1 and j+1 ) -> so to count total maching we do 
        // 1 + dp[i-1][j-1]
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){

                if(text1[i-1] == text2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];

                else{
                    dp[i][j] = max( dp[i][j-1] , dp[i-1][j] );
                }
            }
        }

        return dp[n][m];
       


    }

// this is memoization + recursive code -> but it will take to much of time 
    int longest(string text1 , string text2 , int i , int j, vector<vector<int>>&mem){

        // base case -> when any of the string reach its size return 0 -> as we can't move forword from there 
        if(i ==  text1.size() || j == text2.size()) return 0;

        if(mem[i][j] != -1) return mem[i][j]; // return the value if you have found it alrady 

        // now if t1[i] == t2[j] when the charector of both the stirg are same , then increse the count by 1 and move forword 
        if( text1[i] == text2[j] ) return mem[i][j] = 1 + longest(text1,text2,i+1,j+1,mem);

        // if char if ith and jth index of text1 and text2 are not equal -> we have two options 
        // either move i or move j 
        // so we have to find out max from both of them 
        return mem[i][j] = max( longest(text1,text2,i,j+1,mem) , longest(text1,text2,i+1,j,mem));
    }
    // int longestCommonSubsequence(string text1, string text2) {

    //     int n , m ; n = text1.size(); m = text2.size();

    //     vector<vector<int>>mem(n+1,vector<int>(m+1,-1));

    //     return longest(text1,text2,0,0,mem);

    // }
};