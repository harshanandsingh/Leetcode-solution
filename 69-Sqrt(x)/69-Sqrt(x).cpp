// Last updated: 1/25/2026, 9:40:23 PM
1typedef long long int lli;
2class Solution {
3public:
4    bool help(int x,lli mid){
5        return mid*mid <= x ? true : false;
6    }
7    int mySqrt(int x) {
8        if(x<=0) return x;
9        int ans = -1;
10        int low=1,high=x;
11        while(low <= high){
12            lli mid = low + (high - low)/2;
13            if(help(x,mid)){
14                ans = mid;
15                low = mid+1;
16            }else{
17                high = mid-1;
18            }
19        }
20        return ans;
21    }
22};