// Last updated: 9/10/2025, 10:47:34 PM
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        // kadans algorithm 
        // but with a twist -> 
        // rule -> find the min sum and subtract with the total sum will get the max sum in circular 
        
        int sum = accumulate(nums.begin(),nums.end(),0);

        int n = nums.size();

        // find in the array 
        int m_sum = nums[0];
        int max_sum = nums[0];
        for(int i=1;i<n;i++){
            // sum+=x;
            // max_sum = max(max_sum , sum);
            // if(sum < 0) sum = 0;
            m_sum = max(nums[i] , m_sum+nums[i]);
            max_sum = max(max_sum , m_sum);
        }
        cout<<max_sum<<endl;

        int min_sum = nums[0];
        m_sum = nums[0];
        for(int i=1;i<n;i++){
            m_sum = min(nums[i],m_sum+nums[i]);
            min_sum = min(m_sum,min_sum);
        }
        cout<<min_sum<<endl;

        return sum != min_sum ? max(max_sum , sum - min_sum) : max_sum;
        
    }
};