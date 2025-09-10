// Last updated: 9/10/2025, 12:45:11 PM
class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int>v(m,-1);

        for(int i=0;i<m;i++){
            int row = 0 , col = i;
            while(row < n && col < m ){

                if(grid[row][col] == 1){
                    if(col == m-1 || grid[row][col+1]== -1){
                        col = -1;
                        break;
                    }
                    row++;
                    col++;
                }
                else{
                    if(col == 0 || grid[row][col-1] == 1){
                        col = -1;
                        break;
                    }
                    row++;
                    col--;
                }
            }
            if(col != -1) v[i]=col;
        }
        return v;

    }
};