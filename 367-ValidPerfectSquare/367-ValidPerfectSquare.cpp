// Last updated: 1/25/2026, 7:09:40 PM
1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4        int low = 1,high=num;
5        while(low<=high){
6            long long mid = low + (high - low)/2;
7            if(mid * mid == num) return true;
8            else if(mid*mid > num) high = mid -1;
9            else low = mid+1;
10        }
11        return false;
12    }
13};