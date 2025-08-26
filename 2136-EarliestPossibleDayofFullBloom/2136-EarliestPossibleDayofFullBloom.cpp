// Last updated: 8/26/2025, 6:44:56 PM
class Solution {
public:
    int earliestFullBloom(vector<int>& p, vector<int>& g) {
        int n = p.size();
        if(n==1) return g[0]+p[0];

        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({g[i],p[i]});
        }
        sort(v.begin(),v.end(),[](pair<int,int> a, pair<int,int> b){
            return a.first>b.first;
        });
        
        int i = 0;
        int sum_ans = 0 , sum_pair = 0;
        int max_sum = INT_MIN;
        while(i<n){
            auto [a,b]=v[i];
            sum_ans +=b+a;// to plant the present flower 
            max_sum = max(sum_ans,max_sum);
            sum_ans-=a;
            i++;
        }
        return max_sum;
    }
};