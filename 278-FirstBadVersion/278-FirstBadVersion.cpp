// Last updated: 8/11/2025, 6:33:48 AM
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low =1,high=n;
        //int ans = INT_MAX;
        int ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            bool res = isBadVersion(mid);
            if(res){
                ans = mid ;
                high = mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};