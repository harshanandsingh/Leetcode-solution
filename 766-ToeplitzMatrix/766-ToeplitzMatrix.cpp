// Last updated: 9/10/2025, 12:07:50 PM
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat) {
        unordered_map<int,int>m;

        int n = mat.size();
        int col = mat[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<col;j++){
                if(m.count(i-j)){
                    if(mat[i][j] != m[i-j]) return false;
                }
                else{
                    m[i-j]=mat[i][j];
                }
            }
        }
        return true;
    }
};