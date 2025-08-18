// Last updated: 8/18/2025, 8:46:09 AM
class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        // step 1 -> find prefix sum 
        // step 2 -> find frequency 
        // return size - max_frequency 
        int n = wall.size();
        vector<vector<long long int>>pre;

        // now we have prefix sum of all the element 
        for(int i=0;i<n;i++){
            vector<long long int>p_s(wall[i].size()-1);
            long long int sum = 0;
            for(int j=0;j<wall[i].size()-1;j++){
                sum+=wall[i][j];
                p_s[j]=sum;
            }
            pre.push_back(p_s);
        }
        // lets find the frequency of each element 
        unordered_map<long long int,int>m;
        for(auto x:pre){
            for(auto y:x){
                m[y]++;
            }
        }
        // now lests find the max among all 
        int max_f = 0;
        for(auto [a,b]:m){
            max_f = max(b,max_f);
        }

        // return the max_frequency 
        return n-max_f;
    }
};