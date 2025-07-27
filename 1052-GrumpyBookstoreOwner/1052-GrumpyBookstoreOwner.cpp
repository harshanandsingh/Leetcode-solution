// Last updated: 7/27/2025, 6:45:48 AM
class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int n = c.size();
        int i = 0 , j = 0;
        int max_sum = 0;
        int sum = 0;
        while(j<n){
            if(g[j]) sum+=c[j];

            if(j-i+1 == m){
                max_sum = max(max_sum, sum);
                if(g[i]) sum-=c[i];
                i++;
            } 
            j++;
        }
        sum=max_sum;
        for(int i=0;i<n;i++){
            if(!g[i]) sum+=c[i];
        }
        return sum;
    }
};