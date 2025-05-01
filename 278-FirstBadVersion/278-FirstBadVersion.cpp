// Last updated: 5/1/2025, 5:16:05 PM
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low =1,high=n;
        int ans = INT_MAX;
        while(low<=high){
            int mid = low + (high-low)/2;
            bool res = isBadVersion(mid);
            if(res){
                ans = min(mid,ans);
                high = mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};