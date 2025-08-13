// Last updated: 8/13/2025, 6:24:37 PM
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // we can solve this by using unbounded knapsack 
        // but by applying space optimization we can solve this in o(n) space 

        vector<int>tc(amount+1,INT_MAX);
        tc[0]=0;
        for(int i=1;i<=amount;i++){
            for(auto c : coins){
                if(i - c >= 0 && tc[i-c] != INT_MAX){
                    tc[i]= min(tc[i-c]+1 , tc[i]);
                }
            }
        }
        return tc[amount] == INT_MAX ? -1 : tc[amount];
    }
};