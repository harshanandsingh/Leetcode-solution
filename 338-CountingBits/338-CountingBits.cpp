// Last updated: 11/12/2025, 6:30:01 PM
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n+1,0);
        for(int i=1;i<=n;i++){
            int num = i;
            // method to coutn number of bit 
            while(num){
                v[i]++;
                num&=num-1;
            }
        }
        return v;
    }
};