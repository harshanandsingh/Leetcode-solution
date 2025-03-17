class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>count;
        int n=nums.size();

        for(int x:nums) count[x]++;

        for(auto x:count){
            if(x.second % 2 !=0) return false;
        }
        return true;
    }
};