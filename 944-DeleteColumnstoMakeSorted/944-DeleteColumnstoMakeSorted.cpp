// Last updated: 7/13/2025, 10:48:52 AM
class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        int n = s.size();
        int m = s[0].size();
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n-1;j++){
                if(s[j][i]>s[j+1][i]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};