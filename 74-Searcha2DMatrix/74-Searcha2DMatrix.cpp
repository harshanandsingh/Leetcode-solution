// Last updated: 8/11/2025, 11:51:48 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int n = mat.size();
        int m = mat[0].size();

        int low = 0, high = n-1;
        
        while(low<=high){
            int mid = low + (high - low )/2;
            if(mat[mid][m-1] < t) low = mid + 1 ;
            else if(mat[mid][0] > t) high = mid - 1;
            else{
                break;
            }
        }
        if(low > high) return false;

        int l = 0 , h = m-1 ;
        int row = low + (high - low )/2;
        while(l<=h){
            int mid = l+ (h-l)/2;
            if(mat[row][mid]==t) return true;
            else if(mat[row][mid]<t) l = mid+1;
            else h = mid - 1;
        }
        return false;
    }
};