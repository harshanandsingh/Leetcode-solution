// Last updated: 7/14/2025, 9:41:27 AM
class Solution {
public:
    int tribonacci(int n) {
        vector<int>v(n+3,0);
        v[0]=0;
        v[1]=1;
        v[2]=1;

        for(int i=3;i<=n;i++){
            v[i]=v[i-1]+v[i-2]+v[i-3];
        }
        return v[n];
    }
};