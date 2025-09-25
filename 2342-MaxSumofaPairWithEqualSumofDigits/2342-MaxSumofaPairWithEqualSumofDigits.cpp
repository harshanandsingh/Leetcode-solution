// Last updated: 9/25/2025, 11:01:03 AM
class Solution {
public:
    int maximumSum(vector<int>& nums) 
    {
        vector<int>array(82,-1);
        int ans=-1;
        for(int num:nums)
        {
            int sum=0,temp=num;
            while(temp>0)
            {
                sum+=temp%10;
                temp/=10;
            }
            if(array[sum]!=-1)
            {
                ans=max(ans,num+array[sum]);
            }
            array[sum]=max(array[sum],num);
        }
        return ans;
    }
};