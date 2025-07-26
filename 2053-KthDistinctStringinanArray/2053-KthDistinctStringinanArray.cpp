// Last updated: 7/26/2025, 4:32:33 PM
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>m;
        for(auto x : arr){
            m[x]++;
        }
        for(auto x:arr){
            if(m[x]==1) k--;
            if(k==0) return x;
        }
        return "";
    }
};