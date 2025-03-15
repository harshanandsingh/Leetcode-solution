class Solution {
public:
    int arraySign(vector<int>& nums) {
        // int n=nums.size();
        // long long int pro=1;
        // for(int x:nums){
        //     pro*=x;
        //     if(pro) pro /= abs(pro);
        //     else return 0;
        // }
        // if(pro<0) return -1;
        // else if(pro >0) return 1;
        // else return 0;

        int sign =1;
        for(int x:nums){
            if(x==0) return 0;
            else if(x<0) sign *=-1;
        }
        return sign;
    }
};