// Last updated: 1/25/2026, 9:27:03 PM
1class Solution {
2public:
3    bool help(long long int mid,int n){
4        long long int sum = 0;
5        // for(int i=1;i<=mid;i++){
6        //     sum+=i;
7        // }
8        sum = mid * (mid+1)/2;
9        return sum<=n ? true : false;
10    }
11    int arrangeCoins(int n) {
12        if(n==1) return 1;
13
14        int low = 0 , high = n;
15        int ans = 0;
16        while(low <=high){
17            long long int mid = low + (high - low)/2;
18            if(help(mid,n)){
19                ans = mid;
20                low = mid+1;
21            }else{
22                high = mid-1;
23            }
24        }
25        return ans;
26    }
27    // int arrangeCoins(int n) {
28    //     long long int low=1, high =  n;
29    //     while(low <= high){
30    //         long long int mid = (low + high)/2;
31    //         long long int  coins_used = mid * (mid + 1) / 2;
32    //         if(coins_used == n) return mid;
33    //         else if(coins_used < n) low = mid + 1;
34    //         else high = mid - 1;
35    //     }
36    //     return high;
37    // }
38};