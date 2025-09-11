// Last updated: 9/11/2025, 5:55:54 PM
class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int n = boxes.size();

        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int move = 0;
            for(int j=0;j<n;j++){
                if(i != j && boxes[j]=='1' ){
                    move+= abs(j-i);
                }
            }
            ans[i] = move;  
        }
        return ans;
    }
};