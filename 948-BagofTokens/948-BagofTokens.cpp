// Last updated: 6/6/2025, 12:58:46 PM
class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int p) {
        int n = t.size();
        sort(t.begin(),t.end());
        int max_s=0;
        int s=0;
        int i=0,j=n-1;
        while(i<=j){
            if(p>=t[i]){
                p-=t[i++];
                s++;
                max_s = max(max_s,s);
            }
            else if(s>=1){
                p+=t[j--];
                s--;
            }
            else{
                break;
            }
        }
        return max_s;
    }
};