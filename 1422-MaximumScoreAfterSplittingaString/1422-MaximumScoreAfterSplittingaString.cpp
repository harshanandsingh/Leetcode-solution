// Last updated: 11/1/2025, 11:02:34 AM
class Solution {
public:
    int maxScore(string s) {

        int n = s.size();
        vector<int>c_0(n,0),c_1(n,0);
        if(s[0]=='0') c_0[0]=1;
        for(int i=1;i<n-1;i++){
            if(s[i]=='0') c_0[i] = c_0[i-1]+1;
            else c_0[i]=c_0[i-1];
        }
        c_0[n-1]=c_0[n-2];
        if(s[n-1]=='1') c_1[n-1]=1;
        for(int i=n-2;i>0;i--){
            if(s[i]=='1') c_1[i]= c_1[i+1]+1;
            else c_1[i]=c_1[i+1];
        }
        c_1[0]=c_1[1];
        int max_score =0;
        for(int i=0;i<n;i++){
            max_score = max(c_0[i]+c_1[i] , max_score);
        }
        return max_score;

    }
};