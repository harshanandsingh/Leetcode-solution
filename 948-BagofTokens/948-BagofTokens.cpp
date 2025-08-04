// Last updated: 8/4/2025, 12:52:43 PM
class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int p) {
        int n = t.size();
        sort(t.begin(),t.end());
        int max_s=0;
        int s=0;
        int i=0,j=n-1;
        while(i<=j){
            if(p>=t[i]){ // till i have  power i will lose my power to gian as much score i can 
                p-=t[i++];
                s++;
                max_s = max(max_s,s); // find the max score each time i gain a score 
            }
            else if(s>=1){ // if my score is >=1 i can loose score to gian more power 
                p+=t[j--]; // loose score to gain most power 
                s--;
            }
            else{
                // when i dont have power lefet and also i dont have score >= 1 so i cnat do anything so break 
                break;
            }
        }
        return max_s;
    }
};