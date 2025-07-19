// Last updated: 7/19/2025, 11:02:59 AM
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& h) {
        int n = h.size();
        int m = h[0].size();

        vector<vector<int>>vis(n,vector<int>(m,INT_MAX));
        vis[0][0]=0;
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>>pq;
        pq.push({0,0,0});// effort i j 

        vector<pair<int,int>>tra={{-1,0},{1,0},{0,1},{0,-1}};

        while(!pq.empty()){
            auto [e,i,j] = pq.top();
            pq.pop();

            for(auto [a_t,b_t]:tra){
                a_t+=i;
                b_t+=j;

                if(a_t>=0 && a_t<n && b_t>=0 && b_t<m){
                    int dif =  abs(h[a_t][b_t]-h[i][j]); // find the differnce of new node and previours node
                    int max_dif = max(dif,e);
                    if(max_dif < vis[a_t][b_t]) {
                        vis[a_t][b_t] = max_dif;
                        pq.push({max_dif,a_t,b_t});
                    }   
                }
            }
        }
        return vis[n-1][m-1];
    }
};