// Last updated: 9/29/2025, 4:06:46 PM
class Solution {
public:
    bool canJump(vector<int>& a) {
        int max_jump = 0;
        int n = a.size();
        for(int i=0;i<n;i++){
            if(max_jump < i) return false;
            max_jump = max(max_jump , a[i]+i);
        }
        return true;
    }
    bool canJump1(vector<int>& a) {
        int n=a.size();
        int goal = a.size()-1;
        for(int i=n-1;i>=0;i--){
            if(i+a[i]>=goal) goal=i;
        }
       return goal==0;
    }
};