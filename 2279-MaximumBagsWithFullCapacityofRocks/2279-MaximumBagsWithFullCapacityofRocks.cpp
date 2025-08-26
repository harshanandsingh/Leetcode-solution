// Last updated: 8/26/2025, 10:23:57 PM
class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& rock, int a_rock) {
        int n = cap.size();
        vector<int>v(n);
        for(int i=0;i<n;i++){
            v[i]=cap[i]-rock[i];
        }
        sort(v.begin(),v.end());
        int count=0;
        for(auto x:v){
            if(a_rock >= x){
                count++;
                a_rock-=x;
            } 
        }
        return count;
    }
};