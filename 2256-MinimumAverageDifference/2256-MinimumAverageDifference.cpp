// Last updated: 9/9/2025, 8:00:20 PM
class Solution {
public:
    int minimumAverageDifference(vector<int>& arr) {
        long long sum = 0;
        int n = arr.size();
        for(auto i : arr){
            sum += i;
        }
        long long mini = sum / n;
        int ans = n - 1;
        long long cur = 0;
        for(int i = 0; i < arr.size() - 1; ++i){
            cur += arr[i];
            long long rem = sum - cur;
            if(mini > abs((cur / (i + 1)) - (rem / (n - i - 1)))){
                mini = abs((cur / (i + 1)) - (rem / (n - i - 1)));
                ans = i;
            }
            else if(mini == abs((cur / (i + 1)) - (rem / (n - i - 1))))ans = min (ans,i);
        }
        return ans;
    }
};