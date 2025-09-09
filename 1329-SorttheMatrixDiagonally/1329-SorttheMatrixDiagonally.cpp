// Last updated: 9/9/2025, 10:38:15 PM
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {

        unordered_map<int,priority_queue<int,vector<int>,greater<>>>map;

        int n = mat.size();
        int m = mat[0].size();

        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                map[i-j].push(mat[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat[i][j] = map[i-j].top();
                map[i-j].pop();
            }
        }
        return mat;


    }
};