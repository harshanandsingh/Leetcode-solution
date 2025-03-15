class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        long long int pro=1;
        for(int x:nums){
            pro*=x;
            if(pro) pro /= abs(pro);
        }
        if(pro<0) return -1;
        else if(pro >0) return 1;
        else return 0;
    }
};