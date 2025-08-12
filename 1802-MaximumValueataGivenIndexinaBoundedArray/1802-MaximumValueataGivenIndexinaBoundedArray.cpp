// Last updated: 8/12/2025, 6:50:26 PM
class Solution {
public:
    bool pos(int peak, int index, int n, int maxSum) {
        auto sideSum = [&](int len, int startVal) {
            if (startVal > len) {
                // We can go down by 1 each time without hitting 1
                return (long long)(startVal - 1 + startVal - len) * len / 2;
            } else {
                // We hit 1 before finishing
                long long decPart = (long long)(startVal - 1 + 1) * (startVal - 1) / 2;
                long long ones = len - (startVal - 1);
                return decPart + ones;
            }
        };
        
        long long left = sideSum(index, peak);
        long long right = sideSum(n - index - 1, peak);
        long long total = left + right + peak;
        
        return total <= maxSum;
    }
    int maxValue(int n, int index, int maxSum) {
        int low = 1 , high = maxSum;
        int ans = low ;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(pos(mid,index,n,maxSum)){
                ans = mid ;
                low = mid +1 ;
            }
            else high = mid - 1;

        }
        return ans;
    }
};