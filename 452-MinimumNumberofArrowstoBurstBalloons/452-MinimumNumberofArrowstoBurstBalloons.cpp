// Last updated: 9/10/2025, 2:38:17 PM
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        

        sort(points.begin(),points.end());


        vector<int> prev = points[0];int cnt=1;
        for(int i=1;i<points.size();i++)
        {
            
              if(  prev[1] < points[i][0])
              {
                   
                       cnt++;
                   prev = points[i];
              }
              else if( prev[1] >= points[i][0])
              {
                

                prev[1]=min(prev[1],points[i][1]);
              }
        }
        return cnt;
    }
};