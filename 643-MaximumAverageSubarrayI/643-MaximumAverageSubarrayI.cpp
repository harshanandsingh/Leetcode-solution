// Last updated: 4/5/2025, 3:52:32 AM
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0;
        int n = nums.size();
        double sum=0;
        double ans ,final_ans=numeric_limits<double>::lowest();
        while(j<n){
            sum+=nums[j];
            if(j-i+1 < k) j++;
            else if(j-i+1 == k ){
                ans = sum / k;
                //cout<<ans<<endl;
                final_ans = max(ans,final_ans);
                //cout<<final_ans<<endl;
                sum-=nums[i++];
                j++;
            }
        }
        return final_ans;
    }
};