class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) v[i].push_back(1);
                else{
                    int a=v[i-1][j-1]+v[i-1][j];
                    v[i].push_back(a);
                }
            }
        }
        return v;

        // vector<vector<int>> v(n); // Initialize a vector of size n

        // for (int i = 0; i < n; i++) {
        //     v[i].resize(i + 1); // Resize the current row to (i+1) elements
        //     v[i][0] = v[i][i] = 1; // First and last elements are always 1

        //     for (int j = 1; j < i; j++) { // Middle elements
        //         v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        //     }
        // }
        // return v;
    }
};