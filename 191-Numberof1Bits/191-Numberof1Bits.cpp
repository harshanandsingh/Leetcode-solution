// Last updated: 11/12/2025, 12:08:44 PM
class Solution {
public:
    int hammingWeight(int n) {
        int ans=0;
        int m = n;
        while(m){
            if(m&1) ans++;
            m>>=1;
        }
        return ans;
    }
};