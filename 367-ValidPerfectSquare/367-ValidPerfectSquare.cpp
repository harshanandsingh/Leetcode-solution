// Last updated: 5/1/2025, 7:40:15 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1,high=num/2+1;
        while(low<=high){
            long long int mid = low + (high - low)/2;
            if(mid * mid == num) return true;
            else if(mid*mid > num) high = mid -1;
            else low = mid+1;
        }
        return false;
    }
};