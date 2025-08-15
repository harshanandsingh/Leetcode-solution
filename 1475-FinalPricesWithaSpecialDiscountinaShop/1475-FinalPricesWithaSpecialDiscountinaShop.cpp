// Last updated: 8/15/2025, 10:29:15 PM
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        for(int i=0;i<prices.size();i++){
            bool found=false;
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]>=prices[j]){
                    found=true;
                    ans.push_back(prices[i]-prices[j]);
                    break;
                }
            }
            if(!found) ans.push_back(prices[i]);
        }
        return ans;
    }
};