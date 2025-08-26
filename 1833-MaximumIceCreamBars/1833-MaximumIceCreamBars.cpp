// Last updated: 8/26/2025, 10:55:49 PM
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans = 0;
        for(auto x:costs){
            if(coins >=x){
                coins-=x;
                ans++;
            }
            else return ans;
        }
        return ans;
    }
};