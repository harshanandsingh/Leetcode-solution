// Last updated: 8/11/2025, 7:18:12 PM
class Solution {
public:
    bool days_need(vector<int>& w, int days , int k){
        long long count = 1 , sum = 0;
        for(auto x : w){

            sum += x;

            if(sum > k ){
                count++;
                sum=x;              
            }
        }
        return count <=days;
    }
    
    int shipWithinDays(vector<int>& w, int days) {

        int n = w.size();

        int min_w = *max_element(w.begin(),w.end());
        long long sum = accumulate(w.begin(), w.end(), 0LL); // max capacity

        int low = min_w, high = sum, ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (days_need(w, days, mid)) {
                ans = mid;
                high = mid - 1; // try smaller capacity
            } else {
                low = mid + 1; // need bigger capacity
            }
        }
        return ans;
    }
};