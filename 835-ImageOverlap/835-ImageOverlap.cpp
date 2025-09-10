// Last updated: 9/10/2025, 11:46:09 AM
class Solution {
public:
    
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        
        int n = img1.size();
        int max_val = INT_MIN;
        //now row offsize ->-2 -1 0 1 2  col offsize ->-2 -1 0 -1 -2 
        for(int i= - (n-1) ;i<n ;i++){
            for(int j = -(n-1) ;j<n;j++){
                int overlap = 0;
                // now matcing condition -> how many 1 overlap 
                for(int k=0;k<n;k++){
                    for(int m=0;m<n;m++){
                        int row = i + k;
                        int col = j + m;
                        if(row >= 0 && row <n && col >=0 && col < n){
                            if(img2[row][col] && img1[k][m]) overlap++;
                        }
                    }
                    max_val = max(max_val , overlap);
                }

            }
        }
        return max_val;
    }
};