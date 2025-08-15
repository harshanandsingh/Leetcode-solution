// Last updated: 8/15/2025, 10:26:09 PM
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int>v;
        int i=0,j=1;
        while(i<n){
            j=i+1;
            while(j<n && prices[j]>prices[i]){
                j++;
            }
            if(j<n)v.push_back(prices[i]-prices[j]);
            else v.push_back(prices[i]);
            i++;
        }
        return v;
    }
};