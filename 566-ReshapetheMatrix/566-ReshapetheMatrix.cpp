// Last updated: 9/7/2025, 6:54:01 PM
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();

        if( m*n != r*c || (n==r && m==c) ) return mat;
        
        int row = 0 , cal = 0;
        vector<vector<int>>ans(r,vector<int>(c,0));
        for(int  i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(cal >= c){
                    row++;
                    cal = cal % c;
                }
                ans[row][cal] = mat[i][j];
                cal++;
            }
        }
        return ans;
    }
};