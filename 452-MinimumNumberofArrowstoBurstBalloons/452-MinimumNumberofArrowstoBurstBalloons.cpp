// Last updated: 9/10/2025, 2:34:30 PM
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        // sort based on ending point 

        
        sort(points.begin(),points.end(), [](vector<int>a , vector<int>b){
            return a[1]<b[1];
        });

        int arrow = 1;
        int end = points[0][1];

        for(auto x:points){
            if(x[0]>end){
                end = x[1];
                arrow++;
            }
        }
        return arrow;
    }
};