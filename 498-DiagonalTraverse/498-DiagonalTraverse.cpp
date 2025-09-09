// Last updated: 9/9/2025, 11:06:22 PM
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> result(m * n);

        int row = 0, col = 0;

        for(int i=0;i< n*m ;i++){

            result[i] = matrix[row][col];

            if((row + col ) %2 ==0){
                //move from top right to bottom left 
                if(col == n-1) row++; 
                else if(row == 0) col++;
                else{
                    row--;
                    col++;
                }
            }else{
                // move form bottom left to top right 

                if(row == m-1) col++;
                else if(col == 0) row++;
                else{
                    row++;
                    col--;
                }
            }
        }
        return result;
    }
};