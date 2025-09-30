// Last updated: 9/30/2025, 9:53:55 AM
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>m;

        int n = bills.size();

        if(bills[0]>5) return false;

        for(int i=0;i<n;i++){
            if(bills[i]==5){
                m[5]++;
            }
            else if(bills[i]==10){
                if(m[5] > 0){
                    m[5]--;
                    m[10]++;
                }
                else return false;
            }
            else{
                if(m[10]>0 && m[5]>0){
                    m[10]--;
                    m[5]--;
                }
                else if(m[5]>=3){
                    m[5]-=3;
                }
                else return false;
            }
        }
        return true;
    }
};