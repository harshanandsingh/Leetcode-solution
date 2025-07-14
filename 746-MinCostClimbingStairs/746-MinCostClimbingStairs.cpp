// Last updated: 7/14/2025, 9:26:55 AM
class Solution {
public:
    // int fib(int n, vector<int>& v){
    //     if(n<=1) return min(v[0],v[1]);
    //     return min(v[n-1],v[n-2]);
    // }
    // int minCostClimbingStairs(vector<int>& cost) {
    //     int n=cost.size();
    //     return fib(n,cost);
    // }

     int minCostClimbingStairs(vector<int>& cost){
        int n = cost.size();
        vector<int>start(n+1,0);

        int j=n-1;
        while(j>=0){
            int a=INT_MAX , b=INT_MAX;
            if(j+1<=n) a = cost[j]+start[j+1];
            if(j+2<=n) b = cost[j]+start[j+2];
            start[j]=min(a,b);
            j--;
        }

        return min(start[0],start[1]);
     }
};