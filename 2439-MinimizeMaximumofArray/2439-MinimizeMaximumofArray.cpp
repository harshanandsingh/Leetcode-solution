// Last updated: 8/12/2025, 5:34:09 PM
class Solution {
public:
    bool pos(vector<int> nums,int k){
        int n = nums.size();
        // for(int i = 1;i<n;i++){
        //     if(nums[i]>k){
        //         int diff = nums[i]-k;
        //         if(nums[i-1]+diff > k) return false;
        //     }
        // }
        // return true;
        long long int sum = 0;
        for(int i = n-1;i>0;i--){
            sum+=nums[i];
            if(sum>k){
                long long int diff = sum-k;
                //cout<<sum<<" "<<diff<<endl;
                sum = diff;
            }
            else sum = 0;
        }
        return sum+nums[0] <= k;
    }
    int minimizeArrayValue(vector<int>& nums) {
        // you can solve this also -> binery search on answer 
        // find the range -> of the posible answer 
        int low = nums[0];
        int high = *max_element(nums.begin(),nums.end());
        int ans = high;

        while(low<=high){
            int mid = low + (high - low)/2;
            if(pos(nums,mid)){
                ans = mid ;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};